#include <stdio.h>

int main(void) {
    int nums[1000];
    int answer[1000];
    int n;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    /* Store the product of all elements to the left of each index. */
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    /* Multiply by the product of all elements to the right. */
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", answer[i]);
    }
    putchar('\n');

    return 0;
}
