#include <stdio.h>

int factorial(int digit)
{
    int result = 1;

    for (int i = 2; i <= digit; i++)
        result *= i;

    return result;
}

int main(void)
{
    int number, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    if (number < 0) {
        printf("%d is not a strong number.\n", original);
        return 0;
    }

    do {
        sum += factorial(number % 10);
        number /= 10;
    } while (number > 0);

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}
