#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float r,h,v;
	printf("enter r value:");
	scanf("%f",&r);
	printf("enter h value:");
	scanf("%f",&h);
	v=0.3*3.14*r*r*h;
	printf("%f",v);
	getch();
}