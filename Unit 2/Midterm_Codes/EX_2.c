/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the square root of a non-negative integer using an iterative method.
 */

#include <stdio.h>

float calc_square_root(int num);

int main(void){

	int num;

	printf("Enter an integer Number: ");

	fflush(stdout);

	scanf("%d", &num);

	if(num<0)
		printf("There is no square root for a negative number.");
	else
		printf("%.6f", calc_square_root(num));
}

float calc_square_root(int num){

	float x[num];

	float y=2;

	for(int i=0; i<num; i++){

		x[i+1]= 0.5*(y+(num/y));

		y=x[i+1];

	}

	return x[num];
}
