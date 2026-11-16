#include <stdio.h>

int main(void)
{
    int number, first, last, middle, place = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        number = -number;

    last = number % 10;

    while (number / place >= 10)
        place *= 10;

    first = number / place;
    middle = number % place;
    middle /= 10;

    printf("After swapping the first and last digits: %d\n",
           last * place + middle * 10 + first);

    return 0;
}

