#include <stdio.h>

int main(void)
{
    int numbers[100];
    int size, k;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    printf("Enter how many positions to rotate: ");
    scanf("%d", &k);

    k %= size;

    /* Reverse the whole array, then reverse each part. */
    for (int left = 0, right = size - 1; left < right; left++, right--) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
    }

    for (int left = 0, right = k - 1; left < right; left++, right--) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
    }

    for (int left = k, right = size - 1; left < right; left++, right--) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
    }

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++)
        printf("%d ", numbers[i]);

    printf("\n");
    return 0;
}
