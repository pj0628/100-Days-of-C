/*
 * Day 39 - Q78 (Sum of Main Diagonal Elements)
 * Description: Find the sum of main diagonal elements of a square matrix.
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

    int n = (rows < cols) ? rows : cols;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    printf("%lld\n", sum);
    return 0;
}
