#include <stdio.h>

int main(void)
{
    double grade1, grade2, grade3, x, diff, max, min, avg, total_grade;

    printf("Enter the two grades: ");
    scanf("%lf %lf", &grade1, &grade2);

    printf("Enter The difference: ");
    scanf("%lf", &x);

    if(grade1 > grade2)
    {
        max = grade1;
        min = grade2;
    }
    if(grade2 > grade1)
    {
        max = grade2;
        min = grade1;
    }

    diff = max - min;
    avg = (grade1 + grade2) / 2.0;

    if(diff < x)
    {
        total_grade = avg; 
    }
    else
    {
        printf("Enter third grade: ");
        scanf("%lf", &grade3);
    }
    
    if(grade3 == avg)
    {
        total_grade = grade3;
    }
    else if(grade3 < min)
    {
        total_grade =  min;
    }
    else
    {
        if(grade3 > avg)
        {
            total_grade = (grade3 + max) / 2.0;
        }
        else
        {
            total_grade = (grade3 + min) / 2.0;
        }
    }

    printf("The total grade is: %lf", total_grade);

    return 0;
}