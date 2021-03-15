#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Eisagete 3 akeraious (times apo 0 ews 10): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num3 == num1 + num2 || num3 == num1 + num3 || num3 == num2 + num3)
    {
        printf("%d, %d, %d\n", num1, num2, num3);
    }
    else
    {
        printf("Eisagete 3 akeraious: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        if(6 % num1 == 0 )
        {
            printf("O  arithmos %d einai pollaplasio tou 6\n", num1);

            if(6 % num2 == 0)
            {
                printf("O  arithmos %d einai pollaplasio tou 6\n", num2);
            }

            if(6 % num3 == 0)
            {
                printf("O  arithmos %d einai pollaplasio tou 6\n", num3);
            }
        }
        else
        {
            if(num1 > 20)
            {
                printf("%d\n", num1);
            }
            if(num2 > 20)
            {
                printf("%d\n", num2);
            }
            if(num3 > 20)
            {
                printf("%d\n", num3);
            }
        }
    }

    return 0;
}