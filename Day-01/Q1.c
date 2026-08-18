/*
 * Day 01 - Q1 (Sum of Two Numbers)
 * Description: Input two integers and display their sum.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int firstNumber, secondNumber, sum;

    /* Read two integers from the user */
    if (scanf("%d %d", &firstNumber, &secondNumber) != 2) {
        return 1;
    }

    sum = firstNumber + secondNumber;
    printf("Sum = %d\n", sum);
    return 0;
}
