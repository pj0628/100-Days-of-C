/*
 * Day 16 - Q31 (Decimal to Binary)
 * Description: Take an integer as input and print its binary representation.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int bits[32];
    int idx = 0;
    unsigned int num = (unsigned int)n;

    while (num > 0) {
        bits[idx++] = (int)(num % 2);
        num /= 2;
    }

    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
    return 0;
}
