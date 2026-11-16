#include <stdio.h>

int main(void)
{
    char text[200];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ')
            text[i] = '-';
    }

    printf("Updated string: %s", text);

    return 0;
}
