/*
 * Day 24 - Q48 (Number Triangle Pattern)
 * Description: Print a number triangle: 1, 12, 123, 1234, 12345.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
