#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10], product[10][10];
    int firstRows, firstColumns, secondRows, secondColumns;

    printf("Enter the rows and columns of the first matrix: ");
    scanf("%d %d", &firstRows, &firstColumns);

    printf("Enter the rows and columns of the second matrix: ");
    scanf("%d %d", &secondRows, &secondColumns);

    if (firstRows < 1 || firstRows > 10 ||
        firstColumns < 1 || firstColumns > 10 ||
        secondRows < 1 || secondRows > 10 ||
        secondColumns < 1 || secondColumns > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    if (firstColumns != secondRows) {
        printf("The matrices cannot be multiplied.\n");
        return 1;
    }

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < firstColumns; j++)
            scanf("%d", &first[i][j]);
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < secondRows; i++) {
        for (int j = 0; j < secondColumns; j++)
            scanf("%d", &second[i][j]);
    }

    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < secondColumns; j++) {
            product[i][j] = 0;

            for (int k = 0; k < firstColumns; k++)
                product[i][j] += first[i][k] * second[k][j];
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < firstRows; i++) {
        for (int j = 0; j < secondColumns; j++)
            printf("%d ", product[i][j]);

        printf("\n");
    }

    return 0;
}
