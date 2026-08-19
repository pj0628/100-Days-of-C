/*
 * Day 02 - Q4 (Circle Area and Circumference)
 * Description: Calculate the area and circumference of a circle given its radius.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    double radius;
    const double PI = 3.141592653589793;

    if (scanf("%lf", &radius) != 1) {
        return 1;
    }

    double area = PI * radius * radius;
    double circumference = 2.0 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
