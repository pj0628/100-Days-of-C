/*
 * Day 19 - Q37 (LCM of Two Numbers)
 * Description: Find the Least Common Multiple (LCM) of two integers.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if (a == 0 || b == 0) {
        printf("0\n");
        return 0;
    }

    int g = gcd(a < 0 ? -a : a, b < 0 ? -b : b);
    long long lcm = ((long long)a / g) * b;
    if (lcm < 0) lcm = -lcm;

    printf("%lld\n", lcm);
    return 0;
}
