/*
 * Day 08 - Q16 (Largest of Three Numbers)
 * Description: Input three numbers and find the largest among them using if-else.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int a, b, c, largest;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest is %d\n", largest);
    return 0;
}
