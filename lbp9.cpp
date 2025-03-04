#include<stdio.h>
#include<conio.h>
int main()
{
	float r,h,v;
	printf("enter the radius");
	scanf("%f",&r);
	printf("enter the height");
	scanf("%f",&h);
	v=3.14*r*r*h;
	printf("volume of a cylinder is %f",v);
	return 0;
}