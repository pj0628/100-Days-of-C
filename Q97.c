#include <ctype.h>
#include <stdio.h>

int main(void) {
    char name[1000];

    if (fgets(name, sizeof name, stdin) == NULL) {
        return 1;
    }

    int at_word_start = 1;

    for (int i = 0; name[i] != '\0'; i++) {
        unsigned char c = (unsigned char)name[i];

        if (isspace(c)) {
            at_word_start = 1;
        } else {
            if (at_word_start) {
                putchar(toupper(c));
                putchar('.');
                at_word_start = 0;
            }
        }
    }

    putchar('\n');
    return 0;
}
