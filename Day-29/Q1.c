/*
 * Day 29 - Q57 (Sum of Array Elements)
 * Description: Find the sum of all elements in a 1D array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) return 1;
        sum += val;
    }

    printf("%lld\n", sum);
    return 0;
}
