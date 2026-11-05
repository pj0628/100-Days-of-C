/*
 * Day 80 - Q130 (Store and Read Student Records in File)
 * Description: Write student records to students.txt with fprintf() and read them with fscanf().
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) return 1;

    for (int i = 0; i < n; i++) {
        char name[100];
        int roll, marks;
        if (scanf("%99s %d %d", name, &roll, &marks) != 3) {
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) return 1;

    char name[100];
    int roll, marks;
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
