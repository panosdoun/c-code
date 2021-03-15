#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1, num2, sum;

    printf("Dwste dyo pragmatikous arithmous: ");
    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;

    if(sum > 0)
    {
        printf("H apolyth timh einai: %f\n", fabs(sum));
    }
    if(sum < 0)
    {
        printf("H apolyth timh einai: %f\n", fabs(sum));
    }

    return 0;
}