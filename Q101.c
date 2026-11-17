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

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d (index %d)\n", nums[first], first);
        printf("Last occurrence: %d (index %d)\n", nums[last], last);
    }

    return 0;
}
