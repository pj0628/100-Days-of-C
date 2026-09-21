/*
 * Day 35 - Q69 (Second Largest Element in Array)
 * Description: Find the second largest element in a 1D array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000) return 1;

    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) return 1;
        if (val > largest) {
            second = largest;
            largest = val;
        } else if (val > second && val < largest) {
            second = val;
        }
    }

    printf("%d\n", second);
    return 0;
}
