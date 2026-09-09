/*
 * Day 23 - Q45 (Sum of Series 2/3 + 4/7 + 6/11 + ...)
 * Description: Find the sum of the series 2/3 + 4/7 + 6/11 + ... up to n terms.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (double)(4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
