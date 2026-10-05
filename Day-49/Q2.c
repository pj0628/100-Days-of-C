/*
 * Day 49 - Q98 (Initials with Full Surname)
 * Description: Print initials of a name with the surname displayed in full.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;

    char *words[100];
    int count = 0;
    char *tok = strtok(line, " \t\r\n");
    while (tok != NULL && count < 100) {
        words[count++] = tok;
        tok = strtok(NULL, " \t\r\n");
    }

    if (count == 0) return 0;
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", (char)toupper((unsigned char)words[i][0]));
    }
    if (count > 1) printf(" ");
    printf("%s\n", words[count - 1]);
    return 0;
}
