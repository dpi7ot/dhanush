#include<stdio.h>
int main()
{
	int n,num,r,sum=0,ans;
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;	
	}
	if(num%sum==0)
	{
	printf("yes");
	}
	else
	{
	printf("no"); 
	}
	

}
