/*
 * Day 15 - Q30 (Reverse a Number)
 * Description: Reverse the digits of a given integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n, reversed = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    printf("%d\n", reversed);
    return 0;
}
