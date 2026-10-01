/*
 * File: EX_6.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to swap two numbers using a temporary variable.
 */

#include <stdio.h>

int main(void)
{
    float num1, num2, temp;

    printf("Enter a value of A: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Enter a value of B: ");
    fflush(stdout);
    scanf("%f", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, value of a: %.2f
", num1);
    printf("After swapping, value of b: %.2f
", num2);

    return 0;
}
