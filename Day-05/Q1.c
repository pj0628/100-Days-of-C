/*
 * Day 05 - Q9 (Simple and Compound Interest)
 * Description: Calculate simple and compound interest for given principal, rate, and time.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;

    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }

    double simpleInterest = (principal * rate * time) / 100.0;
    double compoundInterest = principal * pow(1.0 + rate / 100.0, time) - principal;

    printf("Simple Interest=%g, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    return 0;
}
