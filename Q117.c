#include <stdio.h>

int main(void) {
    int a[1000], b[1000], merged[2000];
    int m, n;

    if (scanf("%d", &m) != 1 || m < 0 || m > 1000) {
        return 1;
    }
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int p = 0; p < k; p++) {
        if (p > 0) putchar(' ');
        printf("%d", merged[p]);
    }
    putchar('\n');

    return 0;
}
