/*
 * Day 40 - Q79 (Diagonal Traversal of a Matrix)
 * Description: Perform zig-zag diagonal traversal of a matrix.
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

    int first = 1;
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            int r = (d < rows) ? d : rows - 1;
            int c = d - r;
            while (r >= 0 && c < cols) {
                if (!first) printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r--;
                c++;
            }
        } else {
            int c = (d < cols) ? d : cols - 1;
            int r = d - c;
            while (c >= 0 && r < rows) {
                if (!first) printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }
    printf("\n");
    return 0;
}
