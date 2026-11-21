/*
 * Day 96 - Q146 (Nested Date Structure in Employee)
 * Description: Create Employee structure with nested Date structure for joining date and print details.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joiningDate;
};

int main(void) {
    struct Employee emp;
    if (scanf("%99s %d %d %d %d",
              emp.name, &emp.id,
              &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) != 5) {
        return 1;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    return 0;
}
