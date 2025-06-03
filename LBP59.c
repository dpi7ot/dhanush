#include <stdio.h>

int main()
 {
    int start, end, num, divisor, isPrime, sum = 0, count = 0;
    float average;
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++) 
	{
        if (num < 2)
            continue;

        isPrime = 1;
        for (divisor = 2; divisor * divisor <= num; divisor++) 
		{
            if (num % divisor == 0)
			 {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) 
		{
            sum += num;
            count++;
        }
    }

    if (count == 0)
        printf("No prime numbers in the range.\n");
    else 
	{
        average = (float)sum / count;
        printf("Average of prime numbers: %.2f\n", average);
    }

    return 0;
}
