#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size;

    printf("Enter the number of elements (2 to 100): ");
    scanf("%d", &size);

    if (size < 2 || size > 100) {
        printf("Please enter a size from 2 to 100.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    int largest = numbers[0];
    int secondLargest = numbers[0];
    int hasSecondLargest = 0;

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
            hasSecondLargest = 1;
        } else if (numbers[i] < largest &&
                   (!hasSecondLargest || numbers[i] > secondLargest)) {
            secondLargest = numbers[i];
            hasSecondLargest = 1;
        }
    }

    if (hasSecondLargest)
        printf("Second largest distinct element = %d\n", secondLargest);
    else
        printf("There is no second largest distinct element.\n");

    return 0;
}
