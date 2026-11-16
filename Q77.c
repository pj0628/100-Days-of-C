#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rows, columns;
    int diagonalSize, isDistinct = 1;

    printf("Enter the number of rows and columns (1 to 10): ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    }

    diagonalSize = rows < columns ? rows : columns;

    for (int i = 0; i < diagonalSize; i++) {
        for (int j = i + 1; j < diagonalSize; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }

        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0;
}
