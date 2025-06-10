#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,r1,n1,temp=0,rev=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		  r=5;
		temp=(temp*10)+r;
		n=n/10;
	}
	n1=temp;
	while(n1>0)
	{
		r1=n1%10;
		rev=(rev*10)+r;
		n1=n1/10;
	}
	printf("%d",rev);
}
