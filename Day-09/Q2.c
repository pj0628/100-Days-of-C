/*
 * Day 09 - Q18 (Percentage to Grade)
 * Description: Accept a percentage (0-100) and assign a letter grade.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int percentage;

    if (scanf("%d", &percentage) != 1) {
        return 1;
    }

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
