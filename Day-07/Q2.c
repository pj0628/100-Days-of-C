/*
 * Day 07 - Q14 (Vowel or Consonant)
 * Description: Input a character and check whether it is a vowel or consonant.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    char lower = (char)tolower((unsigned char)ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
