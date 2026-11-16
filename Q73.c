#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rowSums[10];
    int rows, columns;

    printf("Enter the number of rows and columns (1 to 10): ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;

        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++)
        printf("Row %d: %d\n", i + 1, rowSums[i]);

    return 0;
}