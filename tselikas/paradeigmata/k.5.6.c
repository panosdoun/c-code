#include <stdio.h>

int main(void)
{
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if(a == 0)
    {
        if(b == 0)
        {
            printf("Infinite soloutions!\n");
        }
        else
        {
            printf("No solutions!\n");
        }
    }
    else
    {
        printf("The solution is: %f\n", -b/a);
    }

    return 0;
}