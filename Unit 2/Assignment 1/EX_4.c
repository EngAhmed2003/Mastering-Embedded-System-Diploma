/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to multiply two floating-point numbers.
 */

/* C Program to Multiply two Floating Point Numbers */

#include <stdio.h>

int main(){

	float i, j;

	printf("Enter two numbers: ");

	fflush(stdout);

	scanf("%f %f",&i, &j);

	printf("Product: %f",i*j);

	return 0;

}
