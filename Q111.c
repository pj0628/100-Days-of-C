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
        return 1;
    }

    for (int start = 0; start <= n - k; start++) {
        int first_negative = 0;

        for (int i = start; i < start + k; i++) {
            if (arr[i] < 0) {
                first_negative = arr[i];
                break;
            }
        }

        if (start > 0) {
            putchar(' ');
        }
        printf("%d", first_negative);
    }

    putchar('\n');
    return 0;
}
