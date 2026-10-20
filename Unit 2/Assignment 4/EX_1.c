/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Print prime numbers between two intervals using a user-defined function.
 */

#include <stdio.h>

int is_prime(int check);

int main(void){

	int num1, num2, temp, flag;

	printf("Enter two number(intervals): ");

	fflush(stdout);

	scanf("%d %d", &num1, &num2);

	if(num1>num2){

		temp = num1;

		num1 = num2;

		num2 = temp;
	}

	printf("Prime numbers between %d and %d: ", num1, num2);

	for(int i= num1+1; i<num2; i++){

		if (i<2) continue;

		flag = is_prime(i);

		if(flag==0)
			printf("%d ", i);
	}
}

int is_prime(int check){

	int flag=0;

	for(int j=2; j<=check/2; j++){

		if(check%j==0){

			flag=1;
			break;
		}
	}

	return flag;
}
