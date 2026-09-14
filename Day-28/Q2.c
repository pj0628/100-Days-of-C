/*
 * Day 28 - Q56 (Read and Print 1D Array)
 * Description: Read and print elements of a one-dimensional array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
