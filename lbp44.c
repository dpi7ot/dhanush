#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=1)
	{
		n--;
		printf("%d",n);
	}
	else
	{
		printf("invalid number");
	}
	return 0;
	}

