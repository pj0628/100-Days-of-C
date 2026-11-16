#include <stdio.h>

int main(void)
{
    int stars[] = {1, 3, 5, 3, 1};

    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < stars[row]; column++)
            printf("*");

        printf("\n");
    }

    return 0;
}
