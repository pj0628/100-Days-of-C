/*
 * Day 64 - Q114 (Longest Substring Without Repeating Characters)
 * Description: Find the length of the longest substring without repeating characters.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[2000];
    if (scanf("%1999s", s) != 1) return 1;

    int lastIdx[256];
    for (int i = 0; i < 256; i++) lastIdx[i] = -1;

    int maxLen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (lastIdx[c] >= start) {
            start = lastIdx[c] + 1;
        }
        lastIdx[c] = i;
        int len = i - start + 1;
        if (len > maxLen) maxLen = len;
    }

    printf("%d\n", maxLen);
    return 0;
}
