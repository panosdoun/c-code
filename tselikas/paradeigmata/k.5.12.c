#include <stdio.h>

int main(void)
{
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10,
    dig11, dig12, dig13, sum, check_dig;

    printf("Enter the ISBN:");
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d",&dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10,&dig11, &dig12, &dig13);

    sum = dig1*1 + dig2*3 + dig3*1 + dig4*3 + dig5*1 + dig6*3 + dig7*1 +
    dig8*3 + dig9*1 + dig10*3 + dig11*1 + dig12*3;

    printf("SUM = %d\n", sum);
    
    check_dig = 10 - (sum % 10);
    
    printf("check_dig = %d\n", check_dig);

    if(check_dig == 10)
    {
        check_dig = 0;
    }
    else if(check_dig == dig13)
    {
        printf("Valid ISBN.\n");
    }
    else
    {
        printf("Invalid ISBN!!!\n");
    }

    return 0;
}
