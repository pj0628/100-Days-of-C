/*
 * Day 09 - Q17 (Roots of a Quadratic Equation)
 * Description: Find the roots of a quadratic equation and categorize them.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0) {
        return 1;
    }

    double discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2.0 * a);
        printf("Roots are real and same: %g\n", root);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
