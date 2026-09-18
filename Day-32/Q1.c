/*
 * Day 32 - Q63 (Merge Two Arrays)
 * Description: Read two arrays and merge them into a single array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n1, n2;
    if (scanf("%d", &n1) != 1 || n1 < 0 || n1 > 500) return 1;
    int a[500];
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    if (scanf("%d", &n2) != 1 || n2 < 0 || n2 > 500) return 1;
    int b[500];
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    int merged[1000];
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];

    int total = n1 + n2;
    for (int i = 0; i < total; i++) {
        printf("%d%s", merged[i], (i < total - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
