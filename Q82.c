#include <stdio.h>

int main(void)
{
    char text[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0' && text[i] != '\n') {
        printf("%c\n", text[i]);
        i++;
    }

    return 0;
}
