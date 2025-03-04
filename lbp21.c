#include<stdio.h>
#include<conio.h>
int main(){

float t;

printf("enter the tempertaure : ");
scanf("%f",&t);
if (t<0)
{
	printf("freezing");	
}
else if (t >= 0 && t <= 20){
	printf("cold");
}
else if (t >=21 && t<=30){
	printf("moderate");
}
else {
	printf("hot");
}
getch();
return 0;
}