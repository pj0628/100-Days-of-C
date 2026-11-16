#include <stdio.h>

int main(void)
{
    char text[200];
    char target;
    int count = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &target);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] == target)
            count++;
    }

    printf("'%c' appears %d time(s).\n", target, count);

    return 0;
}
