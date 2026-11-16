#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int size;
    int isSymmetric = 1;

    printf("Enter the order of the square matrix (1 to 10): ");
    scanf("%d", &size);

    if (size < 1 || size > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }

        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
