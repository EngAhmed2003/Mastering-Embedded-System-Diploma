/*
 * File: EX_7.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to swap two numbers without using a temporary variable.
 */

#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("Enter a value of A: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Enter a value of B: ");
    fflush(stdout);
    scanf("%f", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping, value of a: %.2f
", num1);
    printf("After swapping, value of b: %.2f
", num2);

    return 0;
}
