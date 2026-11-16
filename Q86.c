#include <stdio.h>

int main(void)
{
    char text[200];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[length] != '\0' && text[length] != '\n')
        length++;

    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
