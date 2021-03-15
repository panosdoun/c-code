#include <stdio.h>

int main(void)
{
    unsigned int price1, price2, price3, price4, max = 0;

    printf("Dwste tis times tessarwn proiontwn: ");
    scanf("%d %d %d %d", &price1, &price2, &price3, &price4);

    if (price1 > max)
    {
        max = price1;
    }
    if (price2 > max)
    {
        max = price2;
    }
    if(price3 > max)
    {
        max = price3;
    }
    if(price4 > max)
    {
        max = price4;
    }

    printf("The maximum price is: %d\n", max);

    return 0;
}