/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the factorial of a number using recursion.
 */

#include <stdio.h>

int product = 1;

int factorial(int x);

int main(void){

	int num, fact;

	printf("Enter a positive integer number: ");

	fflush(stdout);

	scanf("%d", &num);

	fact = factorial(num);

	if(fact>0)
		printf("%d", fact);

	else
		printf("!!!ERORR!!! invalid input");
}

int factorial(int x){

	if(x>0){

		product *= x;

		x--;

		factorial(x);
	}

	else if(x<0)
		product=0;

	return product;
}
