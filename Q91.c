#include <stdio.h>

int main(void) {
    char str[1000];
    int i, j = 0;

    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            str[j++] = c;
        }
    }

    str[j] = '\0';
    printf("%s", str);
    return 0;
}
