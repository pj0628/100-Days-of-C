/*
 * Day 74 - Q124 (Copy File Using fgetc() and fputc())
 * Description: Take source and destination filenames and copy content character by character.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char srcName[256], destName[256];
    if (scanf("%255s %255s", srcName, destName) != 2) return 1;

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", srcName);
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error: Cannot open destination file %s\n", destName);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s\n", destName);
    return 0;
}
