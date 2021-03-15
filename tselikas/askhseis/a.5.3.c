#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Dwste treis akeraious: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 < num2 && num2 < num3)
    {
        printf("Oi arithmoi einai se afksousa seira\n");
    }
    else
    {
        printf("Oi arithmoi den einai se afksousa seira\n");
    }

    return 0;
}