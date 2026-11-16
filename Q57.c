#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size, sum = 0;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum of the array elements = %d\n", sum);

    return 0;
}
