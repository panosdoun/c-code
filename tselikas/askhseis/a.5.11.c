#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, fx;

    printf("Dwste thn timh ths pragmatikhs metablitis x : ");
    scanf("%lf", &x);

    if( x < -5)
    {
        fx = 8;

        printf("H timh ths synarthshs einai f(x) = %.3f\n", fx);
    }
    else if(x >= -5 && x < 3)
    {
        fx = 1 / x;

        printf("H timh ths synarthshs einai f(x) = %.3f\n", fx);
    }
    else if(x >= 3 && x < 12)
    {
        fx = (x * x) - 4;

        printf("H timh ths synarthshs einai f(x) = %.3f\n", fx);
    }
    else
    {
        fx = 6 / pow((x-14), 2);

        printf("H timh ths synarthshs einai f(x) = %.3f\n", fx);
    }

    return 0;

}