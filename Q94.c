#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];

    if (fgets(sentence, sizeof sentence, stdin) == NULL) {
        return 1;
    }

    char longest[1000] = "";
    int longest_len = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        while (sentence[i] != '\0' && isspace((unsigned char)sentence[i])) {
            i++;
        }

        int start = i;
        while (sentence[i] != '\0' && !isspace((unsigned char)sentence[i])) {
            i++;
        }

        int len = i - start;
        if (len > longest_len) {
            strncpy(longest, sentence + start, len);
            longest[len] = '\0';
            longest_len = len;
        }
    }

    if (longest_len > 0) {
        printf("%s\n", longest);
    } else {
        printf("No words found\n");
    }

    return 0;
}
