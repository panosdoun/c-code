#include <stdio.h>

int main(void)
{
    float grade1, grade2;

    printf("Enter the two grades: ");
    scanf("%f %f", &grade1, &grade2);

    if(grade1 < grade2)
    {
        printf("%.2f\n%.2f\n", grade1, grade2);
    }
    else
    {
        printf("%.2f\n%.2f\n", grade2, grade1);
    }

    return 0;
}