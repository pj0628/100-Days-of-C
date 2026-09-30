/*
 * Day 44 - Q88 (Replace Spaces with Hyphens)
 * Description: Replace all spaces in a string with hyphens.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}
