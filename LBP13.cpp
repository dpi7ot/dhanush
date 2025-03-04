#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float m,v,KE;
	printf("enter the m value:");
	scanf("%f",&m);
		printf("enter the v value:");
	scanf("%f",&v);
	KE=0.5*m*v*v;
	printf("%f",KE);
	getch();
}