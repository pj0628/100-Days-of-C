#include <stdio.h>

int main() {
    double first, second;
    char operator;

    printf("Enter an expression (for example, 8 + 2): ");
    scanf("%lf %c %lf", &first, &operator, &second);

    switch (operator) {
        case '+':
            printf("Result = %.2f\n", first + second);
            break;
        case '-':
            printf("Result = %.2f\n", first - second);
            break;
        case '*':
            printf("Result = %.2f\n", first * second);
            break;
        case '/':
            if (second == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Result = %.2f\n", first / second);
            }
            break;
        case '%':
            if ((int)second == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Result = %d\n", (int)first % (int)second);
            }
            break;
        default:
            printf("Invalid operator. Use +, -, *, /, or %%.\n");
    }

    return 0;
}