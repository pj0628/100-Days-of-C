#include <stdio.h>

int main(void)
{
    char text[200];
    int spaces = 0, digits = 0, specialCharacters = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        char ch = text[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (!((ch >= 'a' && ch <= 'z') ||
                   (ch >= 'A' && ch <= 'Z')))
            specialCharacters++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialCharacters);

    return 0;
}
