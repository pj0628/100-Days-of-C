/*
 * Day 65 - Q115 (Valid Anagram Check)
 * Description: Check if two lowercase strings are valid anagrams.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], t[1000];
    if (scanf("%999s %999s", s, t) != 2) return 1;

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
