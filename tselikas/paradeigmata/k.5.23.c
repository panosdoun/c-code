#include <stdio.h>

int main(void)
{
    int sex;
    double ypsos;

    printf("Dwste to fyllo (0:andras 1:ginaika): ");
    scanf("%d", &sex);

    switch (sex)
    {
        case 0: 
                printf("Dwste to ypsos: ");
                scanf("%lf", &ypsos);

                if(ypsos < 1.70)
                {
                    printf("kontos\n");
                }
                else if(ypsos < 1.85)
                {
                    printf("Kanonikos\n");
                }
                else
                {
                    printf("psilos\n");
                }
        break;

        case 1:
              printf("Dwste to ypsos: ");
                scanf("%lf", &ypsos);

                if(ypsos < 1.60)
                {
                    printf("konth\n");
                }
                else if(ypsos < 1.75)
                {
                    printf("Kanonikh\n");
                }
                else
                {
                    printf("psilh\n");
                }
        break;

        default:
                printf("Lathos epilogh\n");
        break;
    }

    return 0;
}