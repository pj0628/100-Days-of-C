/*
 * Day 21 - Q41 (Swap First and Last Digit)
 * Description: Swap the first and last digit of an integer.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char numStr[64];

    if (scanf("%63s", numStr) != 1) {
        return 1;
    }

    size_t len = strlen(numStr);
    if (len > 1) {
        char temp = numStr[0];
        numStr[0] = numStr[len - 1];
        numStr[len - 1] = temp;
    }

    printf("%s\n", numStr);
    return 0;
}
