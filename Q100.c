#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];

    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';
    int length = (int)strlen(str);

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++) {
                putchar(str[i]);
            }
            putchar('\n');
        }
    }

    return 0;
}
