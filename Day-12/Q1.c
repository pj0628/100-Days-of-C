/*
 * Day 12 - Q23 (Library Fine Calculator)
 * Description: Calculate library fine based on tiered late day rates or cancel membership.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int lateDays;

    if (scanf("%d", &lateDays) != 1) {
        return 1;
    }

    if (lateDays > 30) {
        printf("Membership Cancelled\n");
    } else if (lateDays <= 0) {
        printf("Fine Rs.0\n");
    } else {
        int fine = 0;
        if (lateDays <= 5) {
            fine = lateDays * 2;
        } else if (lateDays <= 10) {
            fine = 5 * 2 + (lateDays - 5) * 4;
        } else {
            fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
        }
        printf("Fine Rs.%d\n", fine);
    }

    return 0;
}
