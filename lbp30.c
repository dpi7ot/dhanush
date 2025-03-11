#include<stdio.h>
#include<conio.h>
int climbstairs(int n)
{
	if(n<=1)
	return 1;
	return climbstairs(n-1)+climbstairs(n-2);

}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",climbstairs(num));
	getch();
	return 0;
}