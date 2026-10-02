/*
 * Day 46 - Q92 (First Repeating Lowercase Alphabet)
 * Description: Find the first repeating lowercase alphabet in a string.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    int seen[26] = {0};
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            if (seen[idx]) {
                printf("%c\n", str[i]);
                return 0;
            }
            seen[idx] = 1;
        }
    }

    printf("None\n");
    return 0;
}
