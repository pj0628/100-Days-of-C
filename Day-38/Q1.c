/*
 * Day 38 - Q75 (Add Two Matrices)
 * Description: Read two matrices of equal dimensions and print their sum.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0 || r1 > 100 || c1 > 100) return 1;

    int a[100][100], b[100][100];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    if (scanf("%d %d", &r2, &c2) != 2 || r1 != r2 || c1 != c2) return 1;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            if (scanf("%d", &b[i][j]) != 1) return 1;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d%s", a[i][j] + b[i][j], (j < c1 - 1) ? " " : "");
        }
        printf("\n");
    }
    return 0;
}
