/*
 * File: EX_7.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to calculate the factorial of a number.
 */

#include <stdio.h>

int main(void)
{
    int num;

    for (int k = 0; k < 2; k++)
    {
        int f = 1;

        printf("Enter an integer: ");
        fflush(stdout);
        scanf("%d", &num);

        if (num < 0)
            printf("Error!!! Factorial of negative numbers doesn't exist
");
        else
        {
            for (int j = 1; j <= num; j++)
                f *= j;

            printf("Factorial = %d
", f);
        }
    }

    return 0;
}
