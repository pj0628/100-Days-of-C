/*
 * Day 22 - Q43 (Strong Number Check)
 * Description: Check if a number is a strong number (sum of factorials of digits equals number).
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int factorial(int d) {
    int f = 1;
    for (int i = 2; i <= d; i++) f *= i;
    return f;
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int original = n, sum = 0;
    while (n > 0) {
        sum += factorial(n % 10);
        n /= 10;
    }

    if (original > 0 && sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
