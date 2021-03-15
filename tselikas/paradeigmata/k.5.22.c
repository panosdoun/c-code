#include <stdio.h>
#define PI 3.14

int main(void)
{
    double pleura, rad, emvado_tetr, emvado_kiklou;
    char epilogh;

    printf("Dwste mia epilogi (0:tetragwno 1:kiklos): ");
    scanf("%c", &epilogh);

    switch (epilogh)
    {
        case '0':
                printf("dwste thn pleura tou tetragwnou: ");
                scanf("%lf", &pleura);

                if(pleura <= 0)
                {
                    printf("To mhkos ths pleyras den einai swsto!!!\n");
                }
                else
                {
                    emvado_tetr = pleura * pleura;

                    printf("To emvadon tou tetragwnou einai: %.2f\n", emvado_tetr);
                }
        break;

        case '1':
                printf("dwste thn aktina tou kikklou: ");
                scanf("%lf", &rad);

                if(rad <= 0)
                {
                    printf("To mhkos ths aktinas den einai swsto!!!\n");
                }
                else
                {
                    emvado_kiklou = PI * (rad * rad);

                    printf("To emvadon tou kiklou einai: %.2f\n", emvado_kiklou);
                }
        break;

        default:
                printf("Lathos epilogh!!!\n");
        break;
    }

    return 0;
}