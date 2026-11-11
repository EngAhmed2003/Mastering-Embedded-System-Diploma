/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the sum of all digits in an integer using recursion.
 */

#include <stdio.h>

int sum_digits(int num);

int main(void){

	int num;

	printf("Enter an Integer Number: ");

	fflush(stdout);

	scanf("%d", &num);

	printf("%d", sum_digits(num));
}

int sum_digits(int num){

	if(num!=0){

		int digit= num % 10;

		return digit + sum_digits(num/10);
	}

	return 0;
}
