/*
 * Day 47 - Q93 (Check Anagrams)
 * Description: Check if two strings are anagrams of each other.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) != 2) return 1;

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }

    int count[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
