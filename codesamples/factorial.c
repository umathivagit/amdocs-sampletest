#include <stdio.h>

unsigned int factorial(unsigned int n);

int main() {
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u", &n);
    printf("The factorial of %u is %u\n", n, factorial(n));
    return 0;
}

unsigned int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

