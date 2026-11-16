#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size, target;
    int left, right, foundAt = -1;

    printf("Enter the array size (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers in sorted order:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    left = 0;
    right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            foundAt = middle;
            break;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    if (foundAt != -1)
        printf("%d was found at position %d.\n", target, foundAt + 1);
    else
        printf("%d was not found in the array.\n", target);

    return 0;
}
