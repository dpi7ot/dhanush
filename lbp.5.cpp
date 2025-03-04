#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,k,root1,root2;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	k=sqrt(b*b-4*a*c);
	root1=((-b)+(k))/2*a;
	printf("%d",root1);
	root2=((-b)-(k))/2*a;
	printf("%d",root2);
	getch();
}