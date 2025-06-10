#include<stdio.h>
int main()
{
	int n,x,y,z;
	scanf("%d",&n);
	x=0;
	y=1;
	printf("01");
	while(0<n-2)
	{
		z=x+y;
		printf("%d",z);
		x=y;
		y=z;
		n=n+1;
	} 
}
