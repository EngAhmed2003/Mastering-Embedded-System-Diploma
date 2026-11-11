/*
 * File: EX_7.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the sum of numbers from 1 to 100 using recursion without loops.
 */

#include <stdio.h>

int sum_numbers(int x, int y);

int main(void){

	printf("%d", sum_numbers(0, 100));
}

int sum_numbers(int x, int y){

	if(x<y){

		x++;

		return x + sum_numbers(x, y);
	}
	return 0;
}
