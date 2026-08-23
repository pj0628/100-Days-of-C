/*
 * Day 06 - Q11 (Even or Odd)
 * Description: Input an integer and check whether it is even or odd using if-else.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int number;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    return 0;
}
