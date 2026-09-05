/*
 * Day 19 - Q38 (Sum of Digits)
 * Description: Find the sum of digits of an integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d\n", sum);
    return 0;
}
