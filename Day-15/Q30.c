#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
