#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size, target, foundAt = -1;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            foundAt = i;
            break;
        }
    }

    if (foundAt != -1)
        printf("%d was found at position %d.\n", target, foundAt + 1);
    else
        printf("%d was not found in the array.\n", target);

    return 0;
}
