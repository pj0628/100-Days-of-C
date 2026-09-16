/*
 * Day 30 - Q59 (Count Even and Odd in Array)
 * Description: Count the number of even and odd integers in an array.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) return 1;
        if (val % 2 == 0) even++;
        else odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
