/*
 * Day 86 - Q136 (Enum for Calculator Menu Choices)
 * Description: Use enum to represent ADD, SUBTRACT, MULTIPLY and perform operations via switch.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char opName[20];
    int x, y;
    if (scanf("%19s %d %d", opName, &x, &y) != 3) return 1;

    enum Operation op;
    if (strcmp(opName, "ADD") == 0) op = ADD;
    else if (strcmp(opName, "SUBTRACT") == 0) op = SUBTRACT;
    else if (strcmp(opName, "MULTIPLY") == 0) op = MULTIPLY;
    else return 1;

    switch (op) {
        case ADD: printf("%d\n", x + y); break;
        case SUBTRACT: printf("%d\n", x - y); break;
        case MULTIPLY: printf("%d\n", x * y); break;
    }
    return 0;
}
