/*
 * Day 39 - Q77 (Distinct Diagonal Elements Check)
 * Description: Check if all elements on the main diagonal of a matrix are distinct.
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
    int distinct = 1;
    for (int i = 0; i < n && distinct; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}
