/*
 * Day 50 - Q100 (Print All Substrings of a String)
 * Description: Print all non-empty substrings of a given string separated by commas.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    if (scanf("%199s", str) != 1) return 1;

    int len = (int)strlen(str);
    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            first = 0;
        }
    }
    putchar('\n');
    return 0;
}
