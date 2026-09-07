/*
 * Day 21 - Q42 (Perfect Number Check)
 * Description: Check if a number is a perfect number.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (n > 0 && sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
