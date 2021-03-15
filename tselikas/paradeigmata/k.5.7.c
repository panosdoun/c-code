#include <stdio.h>

int main(void)
{
    float bmi, height, weight;
    float max_normal_weight, min_normal_weight;
    
    printf("Enter the height (in meters): ");
    scanf("%f", &height);

    printf("Enter th weight (in kgr): ");
    scanf("%f", &weight);

    bmi  = weight / (height * height);

    if(bmi < 20)
    {
        printf("Under normal weight!\n");
    }
    else if(bmi <= 25)
    {
        printf("Normal weight!\n");
    }
    else if(bmi <= 30)
    {
        printf("Overweight!\n");
    }
    else if(bmi <= 40)
    {
        printf("obese person!\n");
    }
    else
    {
        printf("Serous obese person!\n");
    }

    max_normal_weight = 25 * height * height;
    min_normal_weight = 20 * height * height;

    printf("The normal weight according to your height is: %.2f - %.2f\n", min_normal_weight, max_normal_weight);

    return 0;
}