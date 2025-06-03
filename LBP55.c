#include<stdio.h>
int main()
{
	int number,sum=0,r;
	scanf("%d",&number);
	while(number > 0)
	{
		r= number % 10;
		sum=sum+r;
		number /= 10;
		
	}
	printf("%d\n",sum);
	return 0;
}
