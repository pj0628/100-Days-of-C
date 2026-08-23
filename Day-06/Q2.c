/*
 * Day 06 - Q12 (Positive, Negative, or Zero)
 * Description: Check whether an integer is positive, negative, or zero using nested if-else.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number > 0) {
        printf("Positive\n");
    } else {
        if (number < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }

    return 0;
}
