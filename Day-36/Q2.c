/*
 * Day 36 - Q72 (Sum of All Elements in Matrix)
 * Description: Find the sum of all elements in a 2D matrix.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) return 1;

    long long sum = 0;
    for (int i = 0; i < rows * cols; i++) {
        int val;
        if (scanf("%d", &val) != 1) return 1;
        sum += val;
    }

    printf("%lld\n", sum);
    return 0;
}
