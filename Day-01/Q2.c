/*
 * Day 01 - Q2 (Basic Arithmetic Operations)
 * Description: Input two numbers and display their sum, difference, product, and quotient.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int num1, num2;

    if (scanf("%d %d", &num1, &num2) != 2) {
        return 1;
    }

    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;

    if (num2 != 0) {
        int quotient = num1 / num2;
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (division by zero)\n", sum, diff, product);
    }

    return 0;
}
