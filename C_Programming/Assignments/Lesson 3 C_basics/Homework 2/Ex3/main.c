#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("please scan three numbers");
    scanf("%d \n %d \n %d", &a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the largest value %d \t",a);
        }
        else
        {
            printf("the largest number is %d \t",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("the largest number is %d \t",b);
        }
        else
        {
            printf("the largest number is %d \t",c);

        }
    }
    return 0;
}
