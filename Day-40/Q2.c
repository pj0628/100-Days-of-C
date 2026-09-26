/*
 * Day 40 - Q80 (Multiply Two Matrices)
 * Description: Multiply two compatible matrices and print the resulting matrix.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0 || r1 > 50 || c1 > 50) return 1;

    int a[50][50], b[50][50], res[50][50] = {{0}};
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    if (scanf("%d %d", &r2, &c2) != 2 || c1 != r2 || r2 > 50 || c2 > 50) return 1;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            if (scanf("%d", &b[i][j]) != 1) return 1;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d%s", res[i][j], (j < c2 - 1) ? " " : "");
        }
        printf("\n");
    }
    return 0;
}
