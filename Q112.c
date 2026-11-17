#include <stdio.h>

int main(void) {
    int arr[1000];
    int n;

    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    long long current_sum = arr[0];
    long long max_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (current_sum < 0) {
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
