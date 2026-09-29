/*
 * Day 43 - Q86 (Palindrome String Check)
 * Description: Check whether an input string is a palindrome.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    int isPal = 1;
    for (size_t i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }

    printf("%s\n", isPal ? "Palindrome" : "Not palindrome");
    return 0;
}
