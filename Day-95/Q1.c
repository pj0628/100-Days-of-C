/*
 * Day 95 - Q145 (Return Structure from Function)
 * Description: Return a Student structure containing the top student's details from a function.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student getTopStudent(const struct Student arr[], int n) {
    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[topIdx].marks) {
            topIdx = i;
        }
    }
    return arr[topIdx];
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 1;

    struct Student students[100];
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 1;
        }
    }

    struct Student top = getTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
