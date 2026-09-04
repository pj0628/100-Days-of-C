/*
 * Day 18 - Q36 (HCF (GCD) of Two Numbers)
 * Description: Find the Highest Common Factor (GCD) of two integers.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
    return 0;
}
