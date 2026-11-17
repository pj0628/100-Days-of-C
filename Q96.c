#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];

    if (fgets(sentence, sizeof sentence, stdin) == NULL) {
        return 1;
    }

    int start = 0;
    int length = (int)strlen(sentence);

    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            for (int left = start, right = i - 1; left < right; left++, right--) {
                char temp = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = temp;
            }
            start = i + 1;
        }
    }

    printf("%s", sentence);
    return 0;
}
