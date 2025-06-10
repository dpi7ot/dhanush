#include<stdio.h>
int main()
{
	int n,r,multi=1,ans;
	scanf("%d",&n);
	if(n=0)
	printf("0");
	while(n>0)
	{
		r=n%10;
		multi=multi*r;
		n=n/10;	
	}
	printf("%d",multi);
}
