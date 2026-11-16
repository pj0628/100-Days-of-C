#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size;

    printf("How many elements do you want to enter? ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Please enter a size from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printf("Array elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", numbers[i]);

    printf("\n");
    return 0;
}
