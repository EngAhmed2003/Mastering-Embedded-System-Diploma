/*
 * File: EX_5.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to check whether a character is an alphabet.
 */

#include <stdio.h>

int main(void)
{
    char ch;

    for (int j = 0; j < 2; j++)
    {
        printf("Enter an alphabet: ");
        fflush(stdout);
        scanf(" %c", &ch);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            printf("%c is an alphabet
", ch);
        else
            printf("%c is not an alphabet
", ch);
    }

    return 0;
}
