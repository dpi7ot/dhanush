#include <stdio.h>
#include <conio.h>
 int main(){
 	char month;
 	int date;
 	printf("enter the month and date: ");
 	scanf("%s %d",&month,&date );
 	if(month="july"&&date==5){
 	printf("1");
	}
	else {
    printf("0");
	}
	getch();
	return 0;
}