#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int size, diagonalSum = 0;

    printf("Enter the order of the square matrix (1 to 10): ");
    scanf("%d", &size);

    if (size < 1 || size > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);

            if (i == j)
                diagonalSum += matrix[i][j];
        }
    }

    printf("Sum of the main diagonal elements = %d\n", diagonalSum);

    return 0;
}
