/*
 * Day 41 - Q81 (Count Characters Without Built-in Length)
 * Description: Count characters in a string without using strlen().
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
