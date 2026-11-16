#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rows, columns;
    int sum = 0;

    printf("Enter the number of rows and columns (1 to 10): ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all matrix elements = %d\n", sum);

    return 0;
}
