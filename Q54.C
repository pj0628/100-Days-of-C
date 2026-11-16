#include <stdio.h>

int main(void)
{
    int stars[] = {1, 3, 5, 7, 5, 3, 1};

    for (int row = 0; row < 7; row++) {
        int spaces = (7 - stars[row]) / 2;

        for (int i = 0; i < spaces; i++)
            printf(" ");

        for (int i = 0; i < stars[row]; i++)
            printf("*");

        printf("\n");
    }

    return 0;
}
