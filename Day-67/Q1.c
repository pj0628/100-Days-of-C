/*
 * Day 67 - Q117 (Merge Two Sorted Arrays)
 * Description: Merge two sorted arrays into a single sorted array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int m, n;
    if (scanf("%d", &m) != 1 || m < 0 || m > 500) return 1;
    int a[500];
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    if (scanf("%d", &n) != 1 || n < 0 || n > 500) return 1;
    int b[500];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    int merged[1000];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int idx = 0; idx < k; idx++) {
        printf("%d%s", merged[idx], (idx < k - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
