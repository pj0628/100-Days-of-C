#include <stdio.h>

int main() {
    int number, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}
