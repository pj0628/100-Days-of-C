#include <stdio.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];

    if (fgets(first, sizeof first, stdin) == NULL ||
        fgets(second, sizeof second, stdin) == NULL) {
        return 1;
    }

    /* Remove trailing newlines. */
    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    size_t len = strlen(first);

    if (len == strlen(second)) {
        char doubled[2000];
        snprintf(doubled, sizeof doubled, "%s%s", first, first);

        if (strstr(doubled, second) != NULL) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not a rotation\n");
    return 0;
}
