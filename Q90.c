#include <stdio.h>

int main(void)
{
    char text[200];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 'a' + 'A';
        else if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = text[i] - 'A' + 'a';
    }

    printf("String with case toggled: %s", text);

    return 0;
}
