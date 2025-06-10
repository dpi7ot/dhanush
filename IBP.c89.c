#include<stdio.h>
int main()
{
	int n,r,count=0,i;
	scanf("%d",&n);
	while(n>1)
	{
		r=n%10;
		if(n%=0)
		count++;
		break;
	}
	if(count==0)
	printf("true");
	else
	printf("false");
	return 0;
}
