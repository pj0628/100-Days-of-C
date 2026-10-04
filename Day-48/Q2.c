/*
 * Day 48 - Q96 (Reverse Each Word in a Sentence)
 * Description: Reverse each word in a sentence while preserving word order.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

void reverseRange(char *s, int l, int r) {
    while (l < r) {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
}

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;

    int len = (int)strlen(line);
    if (len > 0 && line[len - 1] == '\n') line[--len] = '\0';

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (line[i] == ' ' || line[i] == '\0') {
            reverseRange(line, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s\n", line);
    return 0;
}
