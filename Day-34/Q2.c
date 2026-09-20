/*
 * Day 34 - Q68 (Delete Element from Array)
 * Description: Delete an element at a specified 0-based index from an array.
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

    int pos;
    if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) return 1;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
