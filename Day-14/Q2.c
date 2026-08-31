/*
 * Day 14 - Q28 (Product of Even Numbers 1 to N)
 * Description: Print the product of even numbers from 1 to n.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    long long product = 1;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);
    return 0;
}
