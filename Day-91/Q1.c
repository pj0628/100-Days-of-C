/*
 * Day 91 - Q141 (Student Structure Read and Print)
 * Description: Define a Student structure with name, roll_no, and marks, then read and print it.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s;
    if (scanf("%99s %d %d", s.name, &s.roll_no, &s.marks) != 3) return 1;

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
