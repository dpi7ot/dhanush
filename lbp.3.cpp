#include<stdio.h>
float area(float);
float area(float x)
{
	float a;
	a=3.14*x*x;
	return a;
}
int main()
{
	float r,sol;
	printf("enter the radius\n");
	scanf("%f",&r);
	sol=area(r);
	printf("area=%f",sol);
	return 0;
}