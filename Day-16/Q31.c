#include <stdio.h>

int main() {
    unsigned int number;
    int binary[32];
    int count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    if (number == 0) {
        printf("Binary representation = 0\n");
    } else {
        while (number > 0) {
            binary[count] = number % 2;
            number /= 2;
            count++;
        }

        printf("Binary representation = ");
        for (int i = count - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf("\n");
    }

    return 0;
}
