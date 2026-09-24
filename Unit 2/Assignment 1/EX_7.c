/*
 * File: EX_7.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to swap two numbers without using a temporary variable.
 */

/* Source Code to Swap Two Numbers without temp variable */

#include <stdio.h>

#include <stdlib.h>

int main(){

	float i, j;

	printf("Enter a value of A: ");

	fflush(stdout);

	scanf("%f",&i);

	printf("Enter a value of B: ");

	fflush(stdout);

	scanf("%f",&j);

	i = i + j;

	j = i - j;

	i = i - j;

	printf("After swapping, value of a: %.2f\n",i);

	printf("After swapping, value of a: %.1f\n",j);

	return 0;

}
