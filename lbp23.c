#include <stdio.h>
#include <conio.h>
int main(){

int purchased_cups,free_cups,total_cups ;

	printf("enter the number of cups purchased :");
	scanf("%d",&purchased_cups);
	
	free_cups = purchased_cups / 6;
	total_cups = purchased_cups + free_cups ;
	printf("the total cups = %d ",total_cups);
	getch();
	return 0;	  	
}