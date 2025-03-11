#include<stdio.h>
#include<conio.h>
int increment(int number)
{
	return number +1;
	
}
int main()
{
	int number,result;
	scanf("%d",&number);
	result=increment(number);
	printf("increment number is %d",result);
	getch();
	return 0;
}


