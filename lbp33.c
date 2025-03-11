#include<stdio.h>
#include<conio.h>
int main()
{
	char one[20];
	int count=0,i;
	printf("enter the string\n");
	scanf("%s",one);
	printf("the given string is %s\n",one);
	for(i=0;one[i]!='\0';i++)
	{
		if(one[i]=='a'||one[i]=='e'||one[i]=='i'||one[i]=='o'||one[i]=='u')
		{
				count++;
		}
	}
printf("the vowels in given string is %d",count);
getch();
return 0;

}
