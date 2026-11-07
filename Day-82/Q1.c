/*
 * Day 82 - Q132 (Enum for Traffic Lights)
 * Description: Define an enum for traffic lights and print Stop, Wait, or Go.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[20];
    if (scanf("%19s", input) != 1) return 1;

    enum TrafficLight light;
    if (strcmp(input, "RED") == 0) light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0) light = GREEN;
    else {
        printf("Invalid signal\n");
        return 1;
    }

    switch (light) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }
    return 0;
}
