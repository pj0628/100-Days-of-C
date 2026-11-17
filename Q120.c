#include <ctype.h>
#include <stdio.h>

int main(void) {
    char str[10000];

    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    int first_letter = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];

        if (isalpha(c)) {
            str[i] = first_letter ? (char)toupper(c) : (char)tolower(c);
            first_letter = 0;
        }
    }

    printf("%s", str);
    return 0;
}
