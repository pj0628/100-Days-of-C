/*
 * Day 44 - Q87 (Count Spaces, Digits, and Special Chars)
 * Description: Count spaces, digits, and special characters in a string.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
