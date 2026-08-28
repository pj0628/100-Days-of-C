/*
 * Day 11 - Q22 (Profit or Loss Percentage)
 * Description: Find profit or loss percentage given cost price and selling price.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    double costPrice, sellingPrice;

    if (scanf("%lf %lf", &costPrice, &sellingPrice) != 2 || costPrice <= 0) {
        return 1;
    }

    if (sellingPrice > costPrice) {
        double profitPct = ((sellingPrice - costPrice) / costPrice) * 100.0;
        printf("Profit %g%%\n", profitPct);
    } else if (sellingPrice < costPrice) {
        double lossPct = ((costPrice - sellingPrice) / costPrice) * 100.0;
        printf("Loss %g%%\n", lossPct);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
