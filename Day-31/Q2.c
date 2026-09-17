/*
 * Day 31 - Q62 (Reverse Array In-Place)
 * Description: Reverse an array without using extra array space.
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

    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
