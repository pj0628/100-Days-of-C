/*
 * Day 27 - Q54 (Centered Diamond Star Pattern)
 * Description: Print a centered diamond pattern of stars (1, 3, 5, 7, 5, 3, 1).
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
