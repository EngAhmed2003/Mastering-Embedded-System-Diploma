/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to check whether an alphabet is a vowel or consonant.
 */

#include <stdio.h>

int main(void)
{
    char ch;

    for (int j = 0; j < 2; j++)
    {
        printf("Enter an alphabet to check: ");
        fflush(stdout);
        scanf(" %c", &ch);

        if ((ch == 'a') || (ch == 'e') || (ch == 'o') || (ch == 'i') ||
            (ch == 'A') || (ch == 'E') || (ch == 'O') || (ch == 'I'))
            printf("%c is vowel\n", ch);
        else
            printf("%c is consonant\n", ch);
    }

    return 0;
}
