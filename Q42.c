#include <stdio.h>

int main(void)
{
    int number, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (int divisor = 1; divisor <= number / 2; divisor++) {
        if (number % divisor == 0)
            sum += divisor;
    }

    if (number > 0 && sum == number)
        printf("%d is a perfect number.\n", number);
    else
        printf("%d is not a perfect number.\n", number);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int number, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (int divisor = 1; divisor <= number / 2; divisor++) {
        if (number % divisor == 0)
            sum += divisor;
    }

    if (number > 0 && sum == number)
        printf("%d is a perfect number.\n", number);
    else
        printf("%d is not a perfect number.\n", number);

    return 0;
}