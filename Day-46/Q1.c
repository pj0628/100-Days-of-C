/*
 * Day 46 - Q91 (Remove Vowels from String)
 * Description: Remove all vowels from an input string.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = (char)tolower((unsigned char)str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            putchar(str[i]);
        }
    }
    putchar('\n');
    return 0;
}
