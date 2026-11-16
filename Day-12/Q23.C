#include <stdio.h>

int main() {
    int lateDays, fine;

    printf("Enter the number of days late: ");
    scanf("%d", &lateDays);

    if (lateDays < 0) {
        printf("Days late cannot be negative.\n");
    } else if (lateDays > 30) {
        printf("Membership cancelled.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Library fine = ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Library fine = ₹%d\n", fine);
    } else {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Library fine = ₹%d\n", fine);
    }

    return 0;
}