/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the power of a number using recursion.
 */

#include <stdio.h>

int calc_power(int x, int y);

int product = 1;

int main(void){

	int base_num, power_num;

	printf("Enter base number: ");

	fflush(stdout);

	scanf("%d", &base_num);

	printf("Enter power number: ");

	fflush(stdout);

	scanf("%d", &power_num);

	if(power_num <= 0)
		printf("!!!ERROR!!! invalid power number");

	else{
		int result = calc_power(base_num, power_num);

		printf("%d ^ %d = %d", base_num, power_num, result);
	}
}

int calc_power(int x, int y){

	if(y > 0){

		product *= x;

		y--;

		calc_power(x, y);
	}

	return product;
}
