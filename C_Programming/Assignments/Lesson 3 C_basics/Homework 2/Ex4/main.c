#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("please enter a number: ");
    scanf("%f",&a);
    if(a>0)
    {
        printf("%f is a positive number",a);
    }
    else if(a<0)
    {
        printf("%f is a negative number",a);
    }
    else{
        printf("You entered a zero");
    }
    return 0;
}
