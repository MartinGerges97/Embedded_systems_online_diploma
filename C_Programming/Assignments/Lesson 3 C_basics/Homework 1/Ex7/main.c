#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("enter value of a: \t");
    scanf("%f", &a);
    printf("enter value of b: \t");
    scanf("%f", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping, value of a = \t %f \r\n", a);
    printf("After swapping, value of b = \t %f \r\n" , b);
    return 0;
}
