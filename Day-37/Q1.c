/*
 * Day 37 - Q73 (Row Sums of a Matrix)
 * Description: Find the sum of each row of a matrix and store it in an array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > 100 || cols > 100) return 1;

    int rowSums[100] = {0};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            if (scanf("%d", &val) != 1) return 1;
            rowSums[i] += val;
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d%s", rowSums[i], (i < rows - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
