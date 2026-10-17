/*
 * Day 61 - Q111 (First Negative Integer in Window of Size K)
 * Description: Find the first negative integer in each subarray of size k (0 if none).
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
        int firstNeg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        printf("%d%s", firstNeg, (i < n - k) ? " " : "");
    }
    printf("\n");
    return 0;
}
