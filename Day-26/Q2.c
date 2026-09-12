/*
 * Day 26 - Q52 (Irregular Spaced Star Pattern)
 * Description: Print a symmetric vertical star pattern.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int counts[] = {1, 3, 5, 3, 1};
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < counts[i]; j++) {
            printf("*\n");
        }
        if (i < rows - 1) {
            printf("\n");
        }
    }
    return 0;
}
