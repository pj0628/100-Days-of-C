/*
 * Day 33 - Q66 (Insert Element in Sorted Array)
 * Description: Insert an element into a sorted array at its appropriate position.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000) return 1;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int key;
    if (scanf("%d", &key) != 1) return 1;

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;

    for (int j = 0; j < n; j++) {
        printf("%d%s", arr[j], (j < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
