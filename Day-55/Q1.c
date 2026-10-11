/*
 * Day 55 - Q105 (Majority Element)
 * Description: Find the element appearing strictly more than n/2 times using Boyer-Moore voting.
 * Source: https://maitysoumik.github.io/basic-coding-with-c/
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;

    int nums[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
    }

    int candidate = nums[0], count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }

    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    return 0;
}
