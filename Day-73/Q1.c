/*
 * Day 73 - Q123 (Count Characters, Words, and Lines in File)
 * Description: Read sample.txt and count total characters, words, and lines.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open sample.txt\n");
        return 1;
    }

    int ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    if (chars > 0 && lines == 0) lines = 1;
    else if (chars > 0) lines++;

    fclose(fp);
    printf("Characters: %d Words: %d Lines: %d\n", chars, words, lines);
    return 0;
}
