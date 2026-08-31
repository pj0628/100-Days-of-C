/*
 * Day 14 - Q27 (Sum of First N Odd Numbers)
 * Description: Print the sum of the first n odd numbers.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);
    return 0;
}
