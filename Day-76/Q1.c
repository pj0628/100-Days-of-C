/*
 * Day 76 - Q126 (Check File Existence and Display Content)
 * Description: Ask user for filename, check for NULL pointer, and print content if it exists.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    if (scanf("%255s", filename) != 1) return 1;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
