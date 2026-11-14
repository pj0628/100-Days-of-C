/*
 * Day 89 - Q139 (Demonstrate Enums Store Integers)
 * Description: Show that enum constants store underlying integer values.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
