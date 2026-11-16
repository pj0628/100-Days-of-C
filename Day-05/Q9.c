#include <stdio.h>
#include <math.h>
int main() {
double principal, rate, time;
double simpleInterest, compoundInterest;
printf("Enter principal, rate (%% per year), and time (years): ");
scanf("%lf %lf %lf", &principal, &rate, &time);
simpleInterest = (principal * rate * time) / 100;
compoundInterest = principal * pow(1 + rate / 100, time) - principal;
printf("Simple interest = %.2f\n", simpleInterest);
printf("Compound interest = %.2f\n", compoundInterest);
return 0;
}