#include <stdio.h>

int main(void) {
    int nums[1000];
    int n;
    long long total = 0;
    long long left_sum = 0;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
        total += nums[i];
    }

    for (int i = 0; i < n; i++) {
        long long right_sum = total - left_sum - nums[i];

        if (left_sum == right_sum) {
            printf("%d\n", i);
            return 0;
        }

        left_sum += nums[i];
    }

    printf("-1\n");
    return 0;
}
