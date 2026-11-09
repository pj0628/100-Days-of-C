/*
 * Day 84 - Q134 (Enum for Operation Status)
 * Description: Define an enum with SUCCESS, FAILURE, and TIMEOUT and print corresponding messages.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[20];
    if (scanf("%19s", input) != 1) return 1;

    enum Status st;
    if (strcmp(input, "SUCCESS") == 0) st = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) st = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) st = TIMEOUT;
    else return 1;

    switch (st) {
        case SUCCESS: printf("Operation succeeded\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
