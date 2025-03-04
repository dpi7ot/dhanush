#include<stdio.h>
#include<conio.h>
int main()
{
	float b,h,v;
	printf("enter the base");
	scanf("%f",&b);
	printf("enter the height");
	scanf("%f",&h);
	v=(b*h)/3;
	printf("volume of a pyramid is %f",v);
	getch();
}