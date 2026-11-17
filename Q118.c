#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    /* The array contains n distinct numbers from 0 through n, with one missing. */
    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            return 1;
        }
        sum += value;
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    printf("%lld\n", expected_sum - sum);

    return 0;
}
