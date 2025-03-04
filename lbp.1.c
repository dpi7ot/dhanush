#include<stdio.h>
float temp(float);
float temp(float c)
{
	float sol;
	sol=((9.0/5.0)*c)+32;
	return sol;
}
int main()
{
	float c,f;
	printf("enter the temp in celcius\n");
	scanf("%f",&c);
	f=temp(c);
	printf("temp in celcius is %f",f);
	return 0;
}