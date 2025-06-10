#include<stdio.h>
int niven(int n)
{
	int sum=0,temp;
	temp=n;
	while(temp>0)
	{
		sum=sum+temp%10;
		temp=temp/10;
	}
	return(n%sum==0);
}
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	if(niven(n))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
