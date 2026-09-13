/*
 * Day 27 - Q53 (Full Diamond Star Pattern)
 * Description: Print a diamond star pattern with 1, 3, 5, 7, 9, 7, 5, 3, 1 stars.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
