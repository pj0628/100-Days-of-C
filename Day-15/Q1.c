/*
 * Day 15 - Q29 (Factorial of a Number)
 * Description: Calculate the factorial of a non-negative integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("%llu\n", factorial);
    return 0;
}
