/*
 * Day 62 - Q112 (Maximum Subarray Sum (Kadane's Algorithm))
 * Description: Find the maximum contiguous subarray sum using Kadane's algorithm.
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

    long long currentSum = arr[0];
    long long bestSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) {
            currentSum += arr[i];
        } else {
            currentSum = arr[i];
        }
        if (currentSum > bestSum) {
            bestSum = currentSum;
        }
    }

    printf("%lld\n", bestSum);
    return 0;
}
