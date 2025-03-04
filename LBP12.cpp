#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float percentage,marksobtained,totalmarks;
	printf("enter the marksobtained");
	scanf("%f",&marksobtained);
	printf("enter totalmarks");
	scanf("%f",&totalmarks);
	percentage=(marksobtained/totalmarks)*100;
	printf("%f",percentage);
	getch();
	}