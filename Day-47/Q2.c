/*
 * Day 47 - Q94 (Longest Word in a Sentence)
 * Description: Find the longest word in an input sentence.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;

    char best[1000] = "";
    size_t bestLen = 0;

    char *token = strtok(line, " \t\r\n");
    while (token != NULL) {
        size_t len = strlen(token);
        if (len > bestLen) {
            bestLen = len;
            strcpy(best, token);
        }
        token = strtok(NULL, " \t\r\n");
    }

    printf("%s\n", best);
    return 0;
}
