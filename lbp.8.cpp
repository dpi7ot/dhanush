#include<stdio.h>
#include<conio.h>
int main()
{
	float length ,width,p;
	printf("enter the length");
	scanf("%f",&length);
	printf("enter the width");
	scanf("%f",width);
	p=2*(length+width);
	printf("the perimeter of rectangle is %f",p);
	getch();
}