/*
 * Day 02 - Q3 (Rectangle Area and Perimeter)
 * Description: Calculate the area and perimeter of a rectangle given its length and breadth.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int length, breadth;

    if (scanf("%d %d", &length, &breadth) != 2) {
        return 1;
    }

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
