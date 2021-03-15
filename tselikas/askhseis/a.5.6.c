#include <stdio.h>

int main(void)
{
    float grade;

    printf("Enter the grade: ");
    scanf("%f", &grade);

    if(grade >= 0 && grade < 10)
    {
        printf("Need Help\n");
    }
    else if(grade >= 10 && grade <= 13)
    {
        printf("Dangerous Zone\n");
    }
    else if(grade > 13 && grade <= 16)
    {
        printf("Good\n");
    }
    else if(grade > 16 && grade <= 18)
    {
        printf("Very Good\n");
    }
    else
    {
        printf("Excellent\n");
    }

    return 0;
}