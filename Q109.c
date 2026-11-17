#include <stdio.h>

int main(void) {
    int arr[1000];
    int n, k;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    long long window_sum = 0;

    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    long long max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
