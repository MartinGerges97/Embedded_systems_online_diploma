#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a, sum=0;
    printf("please enter an integer: ");
    scanf("%d",&a);
    for (i=0;i<=a;i++)
    {
        sum+=i;
    }
    printf("the total summation is %d",sum);
    return 0;
}
