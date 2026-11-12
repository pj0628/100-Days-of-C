/*
 * Day 87 - Q137 (Enum for User Roles)
 * Description: Create an enum for user roles (ADMIN, USER, GUEST) and display role-based messages.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char roleStr[20];
    if (scanf("%19s", roleStr) != 1) return 1;

    enum Role role;
    if (strcmp(roleStr, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(roleStr, "USER") == 0) role = USER;
    else if (strcmp(roleStr, "GUEST") == 0) role = GUEST;
    else return 1;

    switch (role) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER: printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }
    return 0;
}
