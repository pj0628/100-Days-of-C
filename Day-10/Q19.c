#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three side lengths: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 + side2 <= side3 ||
        side1 + side3 <= side2 ||
        side2 + side3 <= side1) {
        printf("These side lengths do not form a triangle.\n");
    } else if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}