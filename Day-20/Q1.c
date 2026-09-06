/*
 * Day 20 - Q39 (Product of Odd Digits)
 * Description: Find the product of odd digits in a number (1 if none).
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    long long product = 1;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) n = -n;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        n /= 10;
    }

    printf("%lld\n", product);
    return 0;
}
