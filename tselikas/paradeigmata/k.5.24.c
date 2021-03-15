#include <stdio.h>

int main(void)
{
    int class;
    float cost, weight;

    printf("Dwste thn thesh (0-economy 1-business 2-VIP): ");
    scanf("%d", &class);

    //printf("dwste to baros twn aposkevwn: ");
    //scanf("%f", &weight);

    switch(class)
    {
        case 0:
                printf("dwste to baros twn aposkevwn: ");
                scanf("%f", &weight);
                
                if(weight <= 25)
                {
                    cost = 0;

                    printf("Den yparxei xrewsh\n");
                }
                else if(weight <= 40)
                {
                    cost = 1.5 * (weight - 25);

                    printf("To kostos metaforas twn aposkevwn einai: %.2f\n", cost);
                }
                else
                {
                    cost = 22.5 + 2.0 * (weight - 40);

                    printf("To kostos metaforas twn aposkevwn einai: %.2f\n", cost);
                }
        break;

        case 1:
                printf("dwste to baros twn aposkevwn: ");
                scanf("%f", &weight);

                if(weight <= 35)
                {
                    cost = 0;

                    printf("Den yparxei xrewsh\n");
                }
                else if(weight <= 50)
                {
                    cost = 1.25 * (weight - 35);

                    printf("To kostos metaforas twn aposkevwn einai: %.2f\n", cost);
                }
                else
                {
                    cost = 18.75 + 1.5 * (weight - 50);

                    printf("To kostos metaforas twn aposkevwn einai: %.2f\n", cost);
                }
        break;

        case 2:
                printf("dwste to baros twn aposkevwn: ");
                scanf("%f", &weight);

                if(weight <= 60)
                {
                    cost = 0;

                    printf("Den yparxei xrewsh");
                }
                else
                {
                    cost = 30;

                    printf("To kostos metaforas twn aposkevwn einai: %.2f\n", cost);
                }
        break;

        default:
                printf("Wrong traffic class!!!\n");
    }

    return 0;
}