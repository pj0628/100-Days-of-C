#include <stdio.h>

int main(void) {
    long long n;

    if (scanf("%lld", &n) != 1 || n <= 0) {
        return 1;
    }

    /* Find x such that x(x + 1)/2 = n(n + 1)/2 - x(x - 1)/2. */
    long long left = 1;
    long long right = n;

    while (left <= right) {
        long long x = left + (right - left) / 2;

        /* Equivalent equation: x^2 = n(n + 1)/2. */
        long long target = n * (n + 1) / 2;
        long long square = x * x;

        if (square == target) {
            printf("%lld\n", x);
            return 0;
        } else if (square < target) {
            left = x + 1;
        } else {
            right = x - 1;
        }
    }

    printf("-1\n");
    return 0;
}
