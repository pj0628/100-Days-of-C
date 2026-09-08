/*
 * Day 22 - Q44 (Sum of Series 1 + 3/4 + 5/6 + ...)
 * Description: Find the sum of the series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    double sum = 0.0;
    if (n >= 1) {
        sum += 1.0;
        for (int i = 2; i <= n; i++) {
            sum += (double)(2 * i - 1) / (double)(2 * i);
        }
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
