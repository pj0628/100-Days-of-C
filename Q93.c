#include <ctype.h>
#include <stdio.h>

int main(void) {
    char first[1000], second[1000];
    int counts[256] = {0};

    if (fgets(first, sizeof first, stdin) == NULL ||
        fgets(second, sizeof second, stdin) == NULL) {
        return 1;
    }

    for (int i = 0; first[i] != '\0'; i++) {
        unsigned char c = (unsigned char)first[i];
        if (!isspace(c)) {
            counts[tolower(c)]++;
        }
    }

    for (int i = 0; second[i] != '\0'; i++) {
        unsigned char c = (unsigned char)second[i];
        if (!isspace(c)) {
            counts[tolower(c)]--;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}