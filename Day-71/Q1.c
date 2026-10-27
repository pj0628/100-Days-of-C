/*
 * Day 71 - Q121 (Write Name and Age to info.txt)
 * Description: Create info.txt in write mode and save user's name and age using fprintf().
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    if (scanf("%99s %d", name, &age) != 2) return 1;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create info.txt\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
