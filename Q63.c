#include <stdio.h>

int main(void)
{
    int first[100], second[100], merged[200];
    int firstSize, secondSize;

    printf("Enter the size of the first array (1 to 100): ");
    scanf("%d", &firstSize);

    if (firstSize < 1 || firstSize > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", firstSize);
    for (int i = 0; i < firstSize; i++)
        scanf("%d", &first[i]);

    printf("Enter the size of the second array (1 to 100): ");
    scanf("%d", &secondSize);

    if (secondSize < 1 || secondSize > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", secondSize);
    for (int i = 0; i < secondSize; i++)
        scanf("%d", &second[i]);

    for (int i = 0; i < firstSize; i++)
        merged[i] = first[i];

    for (int i = 0; i < secondSize; i++)
        merged[firstSize + i] = second[i];

    printf("Merged array: ");
    for (int i = 0; i < firstSize + secondSize; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}
