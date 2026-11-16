#include <stdio.h>

int main() {
    int number, original, digit, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    original = number;

    while (number > 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}