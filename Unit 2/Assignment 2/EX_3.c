/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to find the largest number among three numbers.
 */

#include <stdio.h>

int main(void)
{
    float num1, num2, num3;

    printf("Enter three different numbers: ");
    fflush(stdout);
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3)
        printf("!!!Error!!! Please enter three different numbers");
    else
    {
        if (num1 > num2 && num1 > num3)
            printf("Largest number is: %.2f\n", num1);
        else if (num2 > num1 && num2 > num3)
            printf("Largest number is: %.2f\n", num2);
        else if (num3 > num1 && num3 > num2)
            printf("Largest number is: %.2f\n", num3);
    }

    return 0;
}
