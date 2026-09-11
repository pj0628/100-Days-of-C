/*
 * Day 25 - Q50 (Right-Aligned Inverted Star Pattern)
 * Description: Print right-aligned inverted triangle of asterisks.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
