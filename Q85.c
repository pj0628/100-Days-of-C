#include <stdio.h>

int main(void)
{
    char text[200];
    int length = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[length] != '\0' && text[length] != '\n')
        length++;

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--)
        printf("%c", text[i]);

    printf("\n");
    return 0;
}
