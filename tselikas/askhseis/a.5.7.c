#include <stdio.h>

int main(void)
{
    int first_eight, sec_eight, third_eight, for_eight, fifth_eight, six_eight;

    printf("Enter the MAC address: ");
    scanf("%x:%x:%x:%x:%x:%x", &first_eight, &sec_eight, &third_eight, &for_eight, &fifth_eight, &six_eight);

    if(first_eight % 2 == 0)
    {
        printf("The MAC is unicast.\n");
    }
    else if(first_eight % 2 != 0)
    {
        printf("The MAC is multicast\n");
    }
    else if(first_eight == 255 && sec_eight == 255 && third_eight == 255 && for_eight == 255 && fifth_eight == 255 && six_eight == 255)
    {
            printf("The MAC is broadcast\n");
    }

    return 0;
}