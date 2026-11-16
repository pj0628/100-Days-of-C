#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long number;
    int counts[10] = {0};
    int mostFrequent = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    number = llabs(number);

    if (number == 0)
        counts[0] = 1;

    while (number > 0) {
        counts[number % 10]++;
        number /= 10;
    }

    for (int digit = 1; digit <= 9; digit++) {
        if (counts[digit] > counts[mostFrequent])
            mostFrequent = digit;
    }

    printf("Digit %d occurs the most times (%d time(s)).\n",
           mostFrequent, counts[mostFrequent]);

    return 0;
}
