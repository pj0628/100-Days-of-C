/*
 * Day 05 - Q10 (Seconds to HH:MM:SS)
 * Description: Input time in seconds and convert it to hours:minutes:seconds format.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int totalSeconds;

    if (scanf("%d", &totalSeconds) != 1) {
        return 1;
    }

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
