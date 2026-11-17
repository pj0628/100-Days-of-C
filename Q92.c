#include <stdio.h>

int main(void) {
    char str[1000];
    int seen[26] = {0};

    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';

            if (seen[index]) {
                printf("%c\n", c);
                return 0;
            }

            seen[index] = 1;
        }
    }

    printf("No repeating lowercase letter\n");
    return 0;
}
