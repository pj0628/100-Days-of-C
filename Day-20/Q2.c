/*
 * Day 20 - Q40 (1's Complement of Binary Number)
 * Description: Find the 1's complement of a binary string and print it.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[128];

    if (scanf("%127s", binary) != 1) {
        return 1;
    }

    for (size_t i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    printf("%s\n", binary);
    return 0;
}
