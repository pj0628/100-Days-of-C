#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 4; row++) {
        for (int column = 1; column <= 5; column++)
            printf("*");

        printf("\n");
    }

    return 0;
}
