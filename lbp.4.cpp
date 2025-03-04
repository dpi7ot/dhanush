#include<stdio.h>
#include<conio.h>
int main()
{
	float volume,radius,constant;
	
	printf("enter the radius");
	scanf("%f",&radius);
	volume=1.33*3.14*radius*radius*radius;
	printf("the volume of sphere is %f",volume);
    getch();
	return 0;
}