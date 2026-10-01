/*
 * File: EX_5.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to find the ASCII value of a character.
 */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &ch);

    printf("ASCII value: %d", ch);

    return 0;
}
