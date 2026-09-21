/*
 * Day 35 - Q70 (Rotate Array Right by K Positions)
 * Description: Rotate an array to the right by k positions.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int k;
    if (scanf("%d", &k) != 1) return 1;

    k = ((k % n) + n) % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
