#include <stdio.h>

int main(void)
{
    int small_bottle, big_bottle, plithos;
    double cost, total_cost;

    printf("Dwste to plhthos twn megalwn mpoukaliwn (se temaxia): ");
    scanf("%d", &big_bottle);

    printf("Dwste to plhthos twn mikrwn mpoukaliwn (se temaxia): ");
    scanf("%d", &small_bottle);

    plithos = big_bottle + small_bottle;
    cost = (big_bottle * 0.02) + (small_bottle * 0.008);
    
    /*if(plithos > 3000)
    {  
            total_cost = cost - (cost * 0.08);

            printf("To synoliko kostos einai(ekptwsh 8%%): %.3f\n", total_cost);
    }*/
    if(cost > 200 && cost <= 600)
    {
        total_cost = cost - (cost * 0.08);

        printf("To synoliko kostos einai(ekptwsh 8%%): %.3f\n", total_cost);
    }
    else if(cost > 600)
    {
        total_cost = cost - (cost * 0.2);

        printf("To synoliko kostos einai(ekptwsh 20%%): %.3f\n", total_cost);

    }
    else
    {
        total_cost = cost;

        printf("To synoliko kostos einai: %.3f\n", total_cost);
    }

    return 0;
}