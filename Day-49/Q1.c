/*
 * Day 49 - Q97 (Print Initials of a Name)
 * Description: Print the initials of a given full name (e.g., John Doe -> J.D.).
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    if (fgets(name, sizeof(name), stdin) == NULL) return 1;

    int inWord = 0;
    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (!isspace((unsigned char)name[i])) {
            if (!inWord) {
                printf("%c.", (char)toupper((unsigned char)name[i]));
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    printf("\n");
    return 0;
}
