/*
 * File: EX_6.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to swap two numbers using a temporary variable.
 */

#include <stdio.h>

int main(){

	float i, j, temp;

	printf("Enter a value of A: ");

	fflush(stdout);

	scanf("%f",&i);

	printf("Enter a value of B: ");

	fflush(stdout);

	scanf("%f",&j);

	temp = i;

	i = j;

	j = temp;

	printf("After swapping, value of a: %.2f\n",i);

	printf("After swapping, value of a: %.1f\n",j);

	return 0;

}
