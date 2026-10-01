/*
 * File: EX_6.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to calculate the sum of natural numbers.
 */

#include <stdio.h>

int main(void)
{
    int num, sum = 0;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);

    for (int j = 1; j <= num; j++)
        sum += j;

    printf("Sum: %d", sum);

    return 0;
}
