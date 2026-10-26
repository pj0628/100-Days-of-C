/*
 * Day 70 - Q120 (Convert String to Sentence/Title Case)
 * Description: Capitalize the first character of each word in a string.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    int newWord = 1;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (isspace((unsigned char)str[i])) {
            newWord = 1;
            putchar(str[i]);
        } else {
            if (newWord) {
                putchar((char)toupper((unsigned char)str[i]));
                newWord = 0;
            } else {
                putchar((char)tolower((unsigned char)str[i]));
            }
        }
    }
    putchar('\n');
    return 0;
}
