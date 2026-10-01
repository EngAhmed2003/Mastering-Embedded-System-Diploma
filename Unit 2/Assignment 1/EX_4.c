/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to multiply two floating-point numbers.
 */

#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%f %f", &num1, &num2);

    printf("Product: %f", num1 * num2);

    return 0;
}
