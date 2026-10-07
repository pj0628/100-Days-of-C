/*
 * Day 51 - Q101 (First and Last Occurrence in Sorted Array)
 * Description: Find first and last index of target in a sorted array using O(log n) binary search.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int findBound(const int arr[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            if (findFirst) high = mid - 1;
            else low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int nums[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
    }

    int target;
    if (scanf("%d", &target) != 1) return 1;

    int first = findBound(nums, n, target, 1);
    int last = findBound(nums, n, target, 0);
    printf("%d,%d\n", first, last);
    return 0;
}
