/*
 * Day 59 - Q109 (Maximum Sum Subarray of Size K)
 * Description: Find the maximum sum of any contiguous subarray of size k.
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

    long long windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];

    long long maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
