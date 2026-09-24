/*
 * Day 38 - Q76 (Symmetric Matrix Check)
 * Description: Check whether a square matrix is symmetric.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > 100 || cols > 100) return 1;

    int mat[100][100];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (scanf("%d", &mat[i][j]) != 1) return 1;

    int symmetric = (rows == cols);
    for (int i = 0; i < rows && symmetric; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "True" : "False");
    return 0;
}
