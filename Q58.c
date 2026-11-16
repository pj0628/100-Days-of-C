#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    int minimum = numbers[0];
    int maximum = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < minimum)
            minimum = numbers[i];

        if (numbers[i] > maximum)
            maximum = numbers[i];
    }

    printf("Minimum element = %d\n", minimum);
    printf("Maximum element = %d\n", maximum);

    return 0;
}
