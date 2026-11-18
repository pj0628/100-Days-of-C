/*
 * Day 93 - Q143 (Student with Highest Marks)
 * Description: Find and print the student with the highest marks from an array of students.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 1;

    struct Student students[100];
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 1;
        }
    }

    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIdx].name, students[topIdx].marks);
    return 0;
}
