/*
 * Day 50 - Q99 (Convert Date Format)
 * Description: Convert date format from dd/mm/yyyy to dd-Mon-yyyy (e.g., 15/04/2025 -> 15-Apr-2025).
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int day, month, year;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &day, &month, &year) != 3) return 1;
    if (month < 1 || month > 12) return 1;

    printf("%02d-%s-%04d\n", day, months[month], year);
    return 0;
}
