/*
 * File: EX_8.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to implement a simple calculator using switch-case.
 */

#include <stdio.h>

int main(){
	char c; float i, j, p;

	printf("Enter operator ( + , - , *, / ): ");
	fflush(stdout);
	scanf("%c", &c);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f", &i, &j);

	switch(c){

	case '+':
		p = i + j;
		printf("%.2f %c %.2f = %.2f",i, c, j, p);
		break;
	case '-':
		p = i - j;
		printf("%.2f %c %.2f = %.2f",i, c, j, p);
		break;

	case '*':
		p = i * j;
		printf("%.2f %c %.2f = %.2f",i, c, j, p);
		break;

	case '/':
		if(j==0)
			printf("Can't divide by zero");
		else
				p = i / j;
		printf("%.2f %c %.2f = %.2f",i, c, j, p);
		break;

	default:
		printf("Error!!! please input valid operator");
	}
	return 0;
}
