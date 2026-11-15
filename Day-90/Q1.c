/*
 * Day 90 - Q140 (Struct with Enum Gender)
 * Description: Define a struct containing an enum Gender and print the person's gender.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[20];
    if (scanf("%19s", input) != 1) return 1;

    struct Person p;
    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    switch (p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }
    return 0;
}
