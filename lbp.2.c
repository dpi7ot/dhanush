#include<stdio.h>
float temp(float);
float temp(float f)
{
	float sol;
	sol=(f-32)*(5.0/9.0);
	return sol;
}
int main()
{
	float f,c;
	printf("enter temp in f\n");
	scanf("%f",&f);
	c=temp(f);
	printf("temp in c is %f",c);
	return 0;
}