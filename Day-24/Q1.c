/*
 * Day 24 - Q47 (Right Triangle Star Pattern)
 * Description: Print a right-angled triangle of asterisks from 1 to 5.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
