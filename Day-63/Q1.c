/*
 * Day 63 - Q113 (Kth Smallest Element in Array)
 * Description: Find the kth smallest element in an integer array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <stdlib.h>

int cmpInt(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) return 1;

    qsort(arr, (size_t)n, sizeof(int), cmpInt);
    printf("%d\n", arr[k - 1]);
    return 0;
}
