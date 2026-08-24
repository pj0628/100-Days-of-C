/*
 * Day 07 - Q13 (Leap Year Checker)
 * Description: Input a year and check whether it is a leap year or not.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int year;

    if (scanf("%d", &year) != 1) {
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
