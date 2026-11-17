#include <stdio.h>

int main(void) {
    int arr[1000];
    int n, x;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &x) != 1) {
        return 1;
    }

    /* Binary search for the first element >= x. */
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    if (left == n) {
        printf("-1\n");
    } else {
        printf("%d\n", left);
    }

    return 0;
}
