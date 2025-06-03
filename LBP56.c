#include<stdio.h>
int main()
{
	int n,max=0;
	scanf("%d",&n);
	while(n>0)
	{
		if(n%10>max)
		{
			max=n%10;
		}
		n=n/10;
	}
	printf("%d",max);
	return 0; 
}
