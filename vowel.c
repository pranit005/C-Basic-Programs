// program for checking the letter is it vowel or not.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter letter to check: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    
    default:
        printf("Consonent");
        break;
    }
    return 0;
}