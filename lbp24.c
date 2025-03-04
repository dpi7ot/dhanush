#include <stdio.h>
#include <stdio.h>
int main() {
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);
    while (n != 0) {
        if (n % 10 == digit) {
            count++;
        }
        n = n / 10; 
    } 
    printf("The digit %d occurred %d times.\n", digit, count);
    getch();
    return 0;
}
