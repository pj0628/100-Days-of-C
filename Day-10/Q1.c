/*
 * Day 10 - Q19 (Triangle Classification)
 * Description: Classify a triangle as Equilateral, Isosceles, or Scalene based on side lengths.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int s1, s2, s3;

    if (scanf("%d %d %d", &s1, &s2, &s3) != 3) {
        return 1;
    }

    if (s1 == s2 && s2 == s3) {
        printf("Equilateral\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}
