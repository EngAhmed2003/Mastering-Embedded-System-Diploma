/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to check whether a number is even or odd.
 */

#include <stdio.h>

int main(void)
{
    int num;

    for (int j = 0; j < 2; j++)
    {
        printf("Enter an integer you want to check: ");
        fflush(stdout);
        scanf("%d", &num);

        if (num % 2 == 0)
            printf("%d is even
", num);
        else
            printf("%d is odd
", num);
    }

    return 0;
}
