#include <stdio.h>

int main() {
    int first, second, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    while (second != 0) {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    printf("HCF (GCD) = %d\n", first);

    return 0;
}

