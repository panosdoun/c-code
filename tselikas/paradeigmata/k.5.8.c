#include <stdio.h>

int main(void)
{
    unsigned int temp, new_code;

    printf("Enter 4-digits code: ");
    scanf("%u", &temp);

    if(temp == 1234)
    {
        printf("Enter 4-digits new code: ");
        scanf("%u", &temp);

        printf("Enter 4_digits new code one more time: ");
        scanf("%u", &new_code);

        if(temp == new_code)
        {
            printf("New PIN is stored!!\n");
        }
        else
        {
            printf("WRONG NUMBER!!! TRY AGAIN!\n");
        }
    }
    printf("WRONG CODE!!! TRY AGAIN!\n");
    
    return 0;
}