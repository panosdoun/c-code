#include <stdio.h>

int main(void)
{
    char sign;
    int num1, num2, sum, diff, prod, div, rem;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    getchar();
    
    printf("Enter the math sign: ");
    scanf("%c", &sign);

    switch (sign)
    {
    case '+':
            sum =  num1 + num2;

            printf("The sum of %d and %d is: %d\n", num1, num2, sum );      
        break;

    case '-':
            diff = num1 - num2;

            printf("The diff of %d and %d is: %d\n", num1, num2, diff);
        break;

    case '*':
            prod = num1 * num2;

            printf("The product of %d and %d is: %d\n", num1, num2, prod);
        break;

    case '/':
            div = (double)num1 / (double)num2;

            printf("The division of %f and %f is: %.2f\n", (double)num1, (double)num2, (double)div);
        break;

    case '%':
            rem = num1 % num2;

            printf("The rem of %d and %d is: %d\n", num1, num2, rem);
        break;
        
    default:
            printf("The math sign is wrong\n");
        break;
    }

    return 0;
}