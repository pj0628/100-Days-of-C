#include <stdio.h>

int main(void) {
    int nums[1000];
    int n, target;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
