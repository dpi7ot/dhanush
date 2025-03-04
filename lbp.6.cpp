#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,b,h;
	printf("enter the a side");
	scanf("%d",&a);
	printf("enter the b side");
	scanf("%d",&b);
	h=sqrt(a*a+b*b);
	printf("the hypoteneous of right ngle triangle is %d",h);
	getch();
}