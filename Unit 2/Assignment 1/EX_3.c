/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to add two integers.
 */

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter two integers: ");
    fflush(stdout);
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d", num1 + num2);

    return 0;
}
