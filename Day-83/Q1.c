/*
 * Day 83 - Q133 (Enum for Months and Days)
 * Description: Create an enum for months and print how many days the given month has.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    char m[10];
    if (scanf("%9s", m) != 1) return 1;

    const char *abbr[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    int monthIdx = 0;
    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(m, abbr[i]) == 0) {
            monthIdx = i;
            break;
        }
    }

    switch ((enum Month)monthIdx) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    return 0;
}
