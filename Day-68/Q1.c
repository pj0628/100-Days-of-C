/*
 * Day 68 - Q118 (Find Missing Number in 0..N)
 * Description: Find the single missing integer from 0 to n in an array of size n.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    long long actualSum = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) return 1;
        actualSum += val;
    }

    long long expectedSum = (long long)n * (n + 1) / 2;
    printf("%lld\n", expectedSum - actualSum);
    return 0;
}
