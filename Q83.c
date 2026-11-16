#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        char ch = (char)tolower((unsigned char)text[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
