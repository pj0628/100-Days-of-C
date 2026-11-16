#include <stdio.h>

int main() {
    int first, second;
    int a, b, remainder, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    a = first;
    b = second;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a;

    if (first == 0 || second == 0) {
        printf("LCM = 0\n");
    } else {
        printf("LCM = %d\n", (first / gcd) * second);
    }

    return 0;
}

