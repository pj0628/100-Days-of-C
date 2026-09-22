/*
 * Day 36 - Q71 (Read and Print a Matrix)
 * Description: Read dimensions and elements of a 2D matrix and print it.
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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d%s", mat[i][j], (j < cols - 1) ? " " : "");
        }
        printf("\n");
    }
    return 0;
}
