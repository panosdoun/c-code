#include <stdio.h>

int main(void)
{
    double eisodima, foros;

    printf("Dwste to ethsio eisodima: ");
    scanf("%lf", &eisodima);

    if(eisodima <= 12000)
    {
        foros = 0;
    }
    else if(eisodima <= 14000)
    {
        foros = (eisodima - 12000) * 0.15;
    }
    else if(eisodima <= 30000)
    {
        foros = (2000 * 0.15) + (eisodima - 14000) * 0.3;
    }
    else
    {
        foros = (2000 * 0.15) + (16000 * 0.3) + (eisodima - 30000) * 0.4;
    }

    printf("O foros eisodimatos einai: %.2lf\n", foros);
}