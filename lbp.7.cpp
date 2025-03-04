#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,h;
	int A;
	printf("enter the a side");
	scanf("%f",&a);
	printf("enter the b side");
	scanf("%f,&b");
	printf("enter the h side");
	scanf("%f",&h);
	A=(a+b)/2*h;
	printf("the area of trapezoid is %d,A");
	getch();
}