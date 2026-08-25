/*
 * Day 08 - Q15 (Character Classification)
 * Description: Check if a character is an uppercase alphabet, lowercase alphabet, digit, or special character.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char ch;

    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}
