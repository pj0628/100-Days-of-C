#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10000], t[10000];
    int frequency[26] = {0};

    if (fgets(s, sizeof s, stdin) == NULL ||
        fgets(t, sizeof t, stdin) == NULL) {
        return 1;
    }

    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        frequency[s[i] - 'a']++;
        frequency[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
