/*
 * Day 69 - Q119 (Find Single Repeated Element)
 * Description: Find the only repeated element in a single iteration.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1 || n > 10000) return 1;

    int *seen = (int *)calloc((size_t)(n + 1), sizeof(int));
    if (!seen) return 1;

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) {
            free(seen);
            return 1;
        }
        if (val >= 0 && val <= n) {
            if (seen[val]) {
                repeated = val;
            }
            seen[val] = 1;
        }
    }

    free(seen);
    printf("%d\n", repeated);
    return 0;
}
