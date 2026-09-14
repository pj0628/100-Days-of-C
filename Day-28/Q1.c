/*
 * Day 28 - Q55 (Print All Primes from 1 to N)
 * Description: Print all prime numbers from 1 to n.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    int first = 1;
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            if (!first) printf(" ");
            printf("%d", num);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
