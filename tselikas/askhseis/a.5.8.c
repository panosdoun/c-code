#include <stdio.h>

int main(void)
{
    double th_grd1, th_grd2, th_grd3;
    double lab_grd1, lab_grd2, lab_grd3;
    double total_grd1, total_grd2, total_grd3;

    printf("Dwste tous bathmous twn 3 foithtwn sto theoritiko meros: ");
    scanf("%lf %lf, %lf", &th_grd1, &th_grd2, &th_grd3);

    printf("Dwste tous bathmous twn 3 foithtwn sto ergastjriako meros: ");
    scanf("%lf %lf %lf", &lab_grd1, &lab_grd2, &lab_grd3);

    total_grd1 = (th_grd1 * 0.3) + (lab_grd1 * 0.7);
    total_grd2 = (th_grd2 * 0.3) + (lab_grd2 * 0.7);
    total_grd3 = (th_grd3 * 0.3) + (lab_grd3 * 0.7);

    if(total_grd1 >= 8 && total_grd1 <= 10)
    {
        printf("Grade of student 1 is: %.1f\n", total_grd1);
    }
    if(total_grd1 >= 8 && total_grd1 <= 10)
    {
        printf("Grade of student 2 is: %.1f\n", total_grd2);
    }
    if(total_grd1 >= 8 && total_grd1 <= 10)
    {
        printf("Grade of student 3 is: %.1f\n", total_grd3);
    }

    return 0;
    
}