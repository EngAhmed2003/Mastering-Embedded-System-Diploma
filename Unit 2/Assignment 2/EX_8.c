/*
 * File: EX_8.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to implement a simple calculator using switch-case.
 */

#include <stdio.h>

int main(void)
{
    char ch;
    float num1, num2, p;

    printf("Enter operator ( + , - , *, / ): ");
    fflush(stdout);
    scanf(" %c", &ch);

    printf("Enter two operands: ");
    fflush(stdout);
    scanf("%f %f", &num1, &num2);

    switch (ch)
    {
        case '+':
            p = num1 + num2;
            printf("%.2f %c %.2f = %.2f", num1, ch, num2, p);
            break;

        case '-':
            p = num1 - num2;
            printf("%.2f %c %.2f = %.2f", num1, ch, num2, p);
            break;

        case '*':
            p = num1 * num2;
            printf("%.2f %c %.2f = %.2f", num1, ch, num2, p);
            break;

        case '/':
            if (num2 == 0)
                printf("Can't divide by zero");
            else
            {
                p = num1 / num2;
                printf("%.2f %c %.2f = %.2f", num1, ch, num2, p);
            }
            break;

        default:
            printf("Error!!! please input valid operator");
    }

    return 0;
}
