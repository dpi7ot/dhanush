#include<stdio.h>
int main()
{
	int n,r,count=0;
	printf("enter the integer:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			count++;
		}
		n=n/10;	
	}
	printf("%d",count);
}
