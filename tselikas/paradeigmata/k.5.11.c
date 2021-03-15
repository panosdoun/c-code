#include <stdio.h>

int main(void)
{
    float grade1, grade2, grade3;

    printf("dwste tous treis bathmous: ");
    scanf("%f %f %f", &grade1, &grade2, &grade3);

    if(grade1 < grade2 && grade1 < grade3)
    {
        if(grade2 < grade3)
        {
            printf("Grades: %.1f %.1f %.1f\n", grade1, grade2, grade3);
        }
    }
    if(grade2 < grade1 && grade2 < grade3)
    {
        if(grade1 < grade3)
        {
            printf("Grades: %.1f %.1f %.1f\n", grade2, grade1, grade3);
        }
    }
    if(grade3 < grade2 && grade3 < grade1)
    {
        if(grade2 < grade1)
        {
            printf("Grades: %.1f %.1f %.1f\n", grade3, grade2, grade1);
        }
    }

    return 0;
}