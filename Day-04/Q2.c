/*
 * Day 04 - Q8 (Sum of First N Natural Numbers)
 * Description: Find and display the sum of the first n natural numbers.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    long long sum = n * (n + 1) / 2;
    printf("Sum=%lld\n", sum);
    return 0;
}
