/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to print an integer entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);

    printf("You entered: %d", num);

    return 0;
}
