/*
 * Day 31 - Q61 (Linear Search in Array)
 * Description: Search for an element in an array using linear search.
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

    int target;
    if (scanf("%d", &target) != 1) return 1;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("-1\n");
    }
    return 0;
}
