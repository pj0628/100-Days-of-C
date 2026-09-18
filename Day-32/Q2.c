/*
 * Day 32 - Q64 (Most Frequent Digit in Number)
 * Description: Find the digit that occurs the most times in an integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n < 0) n = -n;
    int freq[10] = {0};

    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }
    }

    int bestDigit = 0;
    for (int d = 1; d < 10; d++) {
        if (freq[d] > freq[bestDigit]) {
            bestDigit = d;
        }
    }

    printf("%d\n", bestDigit);
    return 0;
}
