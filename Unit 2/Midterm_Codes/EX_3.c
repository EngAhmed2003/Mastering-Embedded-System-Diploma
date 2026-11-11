/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Print prime numbers between two input numbers.
 */

#include <stdio.h>

void calc_prime_nums(int x, int y);

int main(void){

	int num1, num2, temp;


	printf("Enter an first number: ");

	fflush(stdout);

	scanf("%d", &num1);

	printf("Enter an second number: ");

	fflush(stdout);

	scanf("%d", &num2);

	if(num1>num2){

		temp = num1;

		num1 = num2;

		num2 = temp;

		calc_prime_nums(num1, num2);
	}

	else if(num1==num2){

		printf("Invalid Input");
		return 1;
	}

	else
		calc_prime_nums(num1, num2);
}

void calc_prime_nums(int x, int y){

	for(int i=x+1; i<y; i++){

		int flag=1;

		for(int j=2; j<i; j++){

			if(i%j==0)
				flag=0;
		}

		if(flag)
			printf("%d ", i);
	}
}
