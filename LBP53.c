#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("enter the values of speed and time\n");
	scanf("%f%f",&speed,&time);
	distance=speed*time;
	printf("%.f",distance);
	return 0;
}
