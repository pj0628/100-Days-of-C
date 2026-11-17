#include <stdio.h>

#define TABLE_SIZE (1 << 20)

int main(void) {
    static int keys[TABLE_SIZE];
    static char used[TABLE_SIZE];
    int n;

    if (scanf("%d", &n) != 1 || n < 0 || n > 500000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            return 1;
        }

        unsigned int index = (unsigned int)value * 2654435761u
                             & (TABLE_SIZE - 1);

        while (used[index] && keys[index] != value) {
            index = (index + 1) & (TABLE_SIZE - 1);
        }

        if (used[index]) {
            printf("%d\n", value);
            return 0;
        }

        used[index] = 1;
        keys[index] = value;
    }

    printf("-1\n");  /* No repeated element found. */
    return 0;
}
