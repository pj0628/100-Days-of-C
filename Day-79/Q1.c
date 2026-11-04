/*
 * Day 79 - Q129 (Sum and Average of Numbers in File)
 * Description: Read integers from numbers.txt and print their sum and average.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num, count = 0;
    long long sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    double avg = (count > 0) ? (double)sum / count : 0.0;
    printf("Sum = %lld Average = %.2f\n", sum, avg);
    return 0;
}
