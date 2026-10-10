/*
 * Day 54 - Q104 (Pivot Integer)
 * Description: Find pivot integer x such that sum(1..x) == sum(x..n) in O(1) time.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n <= 0) return 1;

    long long total = n * (n + 1) / 2;
    long long x = (long long)(sqrt((double)total) + 0.5);

    if (x * x == total) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    return 0;
}
