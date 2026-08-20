/*
 * Day 03 - Q5 (Celsius to Fahrenheit)
 * Description: Convert temperature from Celsius to Fahrenheit.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    double celsius;

    if (scanf("%lf", &celsius) != 1) {
        return 1;
    }

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Fahrenheit=%g\n", fahrenheit);
    return 0;
}
