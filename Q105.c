#include <stdio.h>

int main(void) {
    int nums[1000];
    int n;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    /* Find a possible majority candidate using Boyer–Moore voting. */
    int candidate = 0;
    int votes = 0;

    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        } else if (nums[i] == candidate) {
            votes++;
        } else {
            votes--;
        }
    }

    /* Verify that the candidate occurs more than n / 2 times. */
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
