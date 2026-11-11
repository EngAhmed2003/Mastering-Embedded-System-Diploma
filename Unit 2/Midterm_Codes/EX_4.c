/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Reverse the digits of an integer using recursion.
 */

#include <stdio.h>

void Reverse_nums(int x);

int main(void){

	int num;


	printf("Enter a number: ");

	fflush(stdout);

	scanf("%d", &num);

	Reverse_nums(num);
}

void Reverse_nums(int x){

	int y;

	if(x!=0){

		y = x%10;


		printf("%d", y);

		Reverse_nums(x/10);
	}
}
