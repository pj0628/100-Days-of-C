/*
 * Day 13 - Q25 (Basic Calculator using Switch-Case)
 * Description: Implement a basic calculator using switch-case for +, -, *, /, %.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        return 1;
    }

    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/':
            if (b != 0) printf("%d\n", a / b);
            else printf("Division by zero error\n");
            break;
        case '%':
            if (b != 0) printf("%d\n", a % b);
            else printf("Modulo by zero error\n");
            break;
        default: printf("Invalid operator\n"); break;
    }

    return 0;
}
