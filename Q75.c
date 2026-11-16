#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10], sum[10][10];
    int rows, columns;

    printf("Enter the number of rows and columns (1 to 10): ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            scanf("%d", &first[i][j]);
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            scanf("%d", &second[i][j]);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            sum[i][j] = first[i][j] + second[i][j];
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            printf("%d ", sum[i][j]);

        printf("\n");
    }

    return 0;
}
