#include <stdio.h>

int main(void) {
    int arr[1000];
    int n;

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int next_greater = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }
        printf("%d", next_greater);
    }

    putchar('\n');
    return 0;
}
