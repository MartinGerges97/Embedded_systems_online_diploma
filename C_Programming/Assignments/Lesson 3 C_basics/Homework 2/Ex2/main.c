#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char10;
    printf("please enter a character: ");
    scanf("%c",&char10);
    switch(char10)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.",char10);
            break;
        default:
            printf("%c is a constant.",char10);
            break;
    }

    return 0;
}
