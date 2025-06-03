#include<stdio.h>
int gcd(int a, int b) 
{
	if(b==0)
		return a;
	else
    	return gcd(b,a%b);
}

int main()
{
	int a,b,c,result;
	printf("enter a value for a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	result=gcd(gcd(a,b),c);
	printf("%d\n",result);
	return 0;
}
