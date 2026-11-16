#include <stdio.h>

int main() {
    int number, digit;
    int product = 1;
    int foundOddDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;

        if (digit % 2 != 0) {
            product *= digit;
            foundOddDigit = 1;
        }

        number /= 10;
    }

    if (foundOddDigit) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("The number has no odd digits.\n");
    }

    return 0;
}
