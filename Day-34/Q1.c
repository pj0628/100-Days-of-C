/*
 * Day 34 - Q67 (Insert Element at Given Position)
 * Description: Insert an element in an array at a specified 0-based index.
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

    int pos, val;
    if (scanf("%d %d", &pos, &val) != 2 || pos < 0 || pos > n) return 1;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
