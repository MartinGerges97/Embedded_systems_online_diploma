#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chara;
    printf("please enter a character: ");
    scanf("%c",&chara);
    if((chara >= 97&& chara <= 122)||(chara >= 65 && chara <= 90))
    {
        printf("%c is an alphapet",chara);
    }
    else{
        printf("%c is not alphapet",chara);
    }
    return 0;
}
