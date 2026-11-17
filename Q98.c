#include <ctype.h>
#include <stdio.h>

int main(void) {
    char name[1000];

    if (fgets(name, sizeof name, stdin) == NULL) {
        return 1;
    }

    int starts[500];
    int ends[500];
    int word_count = 0;
    int in_word = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        if (!isspace((unsigned char)name[i])) {
            if (!in_word) {
                starts[word_count] = i;
                in_word = 1;
            }
            ends[word_count] = i + 1;
        } else {
            in_word = 0;
        }
    }

    if (word_count == 0) {
        /* Count words from the recorded boundaries below. */
    }

    /* Recount boundaries safely. */
    word_count = 0;
    in_word = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isspace((unsigned char)name[i])) {
            if (!in_word) {
                starts[word_count] = i;
                in_word = 1;
            }
            ends[word_count] = i + 1;
        } else {
            in_word = 0;
        }
    }

    /* Determine count from the last populated word. */
    if (in_word) {
        word_count++;
    }
    for (int i = 0; i < 1000 && name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i]) &&
            i > 0 && !isspace((unsigned char)name[i - 1])) {
            word_count++;
        }
    }

    if (word_count == 0) {
        putchar('\n');
        return 0;
    }

    for (int w = 0; w < word_count - 1; w++) {
        printf("%c. ", toupper((unsigned char)name[starts[w]]));
    }

    for (int i = starts[word_count - 1]; i < ends[word_count - 1]; i++) {
        putchar(name[i]);
    }
    putchar('\n');

    return 0;
}
