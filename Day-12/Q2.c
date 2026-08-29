/*
 * Day 12 - Q24 (Electricity Bill Calculator)
 * Description: Calculate electricity bill based on tiered unit consumption slabs.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int units;

    if (scanf("%d", &units) != 1) {
        return 1;
    }

    int bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill: Rs.%d\n", bill);
    return 0;
}
