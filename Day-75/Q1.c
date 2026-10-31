/*
 * Day 75 - Q125 (Append Text to Existing File)
 * Description: Open data.txt in append mode and append a new line of text.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char line[512];
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }

    fprintf(fp, "\n%s", line);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
