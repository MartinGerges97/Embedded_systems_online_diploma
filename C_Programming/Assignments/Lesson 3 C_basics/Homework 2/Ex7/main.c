#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a, fact = 1;
    printf("please enter an integer: ");
    scanf("%d",&a);
    if(a>=0)
    {
        for (i=1; i<=a; i++)
        {
            fact *=i;
        }
        printf("the factorial of %d is %d",a,fact);
    }
    else
    {
        printf("Error!!");
    }

    return 0;
}
