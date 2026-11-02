/*
 * Day 77 - Q127 (Convert File Text to Uppercase)
 * Description: Read input.txt, convert lowercase letters to uppercase, and write to output.txt.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        printf("Error: Could not create output.txt\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);
    printf("Converted input.txt to uppercase in output.txt\n");
    return 0;
}
