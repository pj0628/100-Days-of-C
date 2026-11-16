#include <stdio.h>

int main(void)
{
    int numbers[101];
    int size, value, position;

    printf("Enter the array size (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers in sorted order:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    position = 0;
    while (position < size && numbers[position] < value)
        position++;

    for (int i = size; i > position; i--)
        numbers[i] = numbers[i - 1];

    numbers[position] = value;
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
        printf("%d ", numbers[i]);

    printf("\n");
    return 0;
}
