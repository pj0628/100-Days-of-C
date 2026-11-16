#include <stdio.h>

int main(void)
{
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = (i == 1) ? 1 : 2 * i;

        sum += (double) numerator / denominator;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
