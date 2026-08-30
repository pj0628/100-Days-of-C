/*
 * Day 13 - Q26 (Print Numbers from 1 to N)
 * Description: Print integers from 1 up to n.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d%s", i, (i < n) ? " " : "");
    }
    printf("\n");
    return 0;
}
