/*
 * Day 16 - Q32 (Palindrome Number Check)
 * Description: Check if a given integer is a palindrome.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n, original, reversed = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    original = n;
    int temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    if (original >= 0 && original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
