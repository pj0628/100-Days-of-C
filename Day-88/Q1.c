/*
 * Day 88 - Q138 (Print Enum Names and Values in Loop)
 * Description: Iterate through enum values and print each name and assigned integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

enum Color { RED, YELLOW, GREEN, COLOR_COUNT };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i < COLOR_COUNT; i++) {
        printf("%s=%d%s", names[i], i, (i < COLOR_COUNT - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}
