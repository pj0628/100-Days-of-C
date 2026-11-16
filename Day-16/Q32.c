#include <stdio.h>

int main() {
    int number, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
