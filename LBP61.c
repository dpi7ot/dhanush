#include <stdio.h>
int gcd(int a, int b) {
	if(b==0)
		return a;
	else
    	return gcd(b,a%b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // LCM formula: (a * b) / GCD(a, b)
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = lcm(a, b);
    printf("%d\n", result);
    return 0;
}

