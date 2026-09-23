/*
 * Day 37 - Q74 (Transpose of a Matrix)
 * Description: Compute and print the transpose of a 2D matrix.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > 100 || cols > 100) return 1;

    int mat[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) return 1;
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d%s", mat[i][j], (i < rows - 1) ? " " : "");
        }
        printf("\n");
    }
    return 0;
}
