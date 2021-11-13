#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char c;
    printf("please enter operator: ");
    scanf("%c",&c);
    printf("please enter two operands: ");
    scanf("%f %f",&a,&b);
    switch(c)
    {
    case '+':
        printf(" %f  + %f = %f",a,b,a+b);
        break;
    case '-':
        printf(" %f  - %f = %f",a,b,a-b);
        break;
    case '*':
        printf(" %f  * %f = %f",a,b,a*b);
        break;
    case '/':
        printf(" %f  / %f = %f",a,b,a/b);

        break;
    default:
        printf("Error!!");
        break;
    }
    return 0;
}
