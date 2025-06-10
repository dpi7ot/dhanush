#include<stdio.h>
int main()
{
	int n,r,b,sum=0;
	scanf("%d",&b);
	n=b;
	while(n>0)
	{
		r=n%10;
		if(r==2||r==3||r==5||r==7)
		sum=sum+r;
		n=n%10;
	}
	printf("%d",b-sum);
	return 0;
}
