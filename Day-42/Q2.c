/*
 * Day 42 - Q84 (Lowercase to Uppercase Manually)
 * Description: Convert a lowercase string to uppercase without using built-in functions.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        if (str[i] != '\n') {
            putchar(str[i]);
        }
    }
    putchar('\n');
    return 0;
}
