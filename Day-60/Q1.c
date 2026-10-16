/*
 * Day 60 - Q110 (Maximum in Each Sliding Window of Size K)
 * Description: Find the maximum element in each contiguous subarray of size k.
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

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) return 1;

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) maxVal = arr[i + j];
        }
        printf("%d%s", maxVal, (i < n - k) ? " " : "");
    }
    printf("\n");
    return 0;
}
