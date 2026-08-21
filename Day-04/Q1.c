/*
 * Day 04 - Q7 (Swap Two Numbers (No Third Variable))
 * Description: Swap two numbers without using a third variable.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
