/*
 * Day 03 - Q6 (Swap Two Numbers (Third Variable))
 * Description: Swap two numbers using a temporary third variable.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int a, b, temp;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
