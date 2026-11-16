#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0)
            positiveCount++;
        else if (numbers[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeros: %d\n", zeroCount);

    return 0;
}
