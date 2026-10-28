/*
 * Day 72 - Q122 (Read File Line by Line using fgets())
 * Description: Open info.txt and print all lines until EOF using fgets().
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
