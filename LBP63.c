#include <stdio.h>

int main() {
    int num, i, sum = 0;
	printf("enter a integer:");
    scanf("%d", &num);
    for (i = 1; i < num; i++) 
	{
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
