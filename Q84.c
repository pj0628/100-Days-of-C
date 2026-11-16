#include <stdio.h>

int main(void)
{
    char text[200];

    printf("Enter a lowercase string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 'a' + 'A';
    }

    printf("Uppercase string: %s", text);

    return 0;
}
