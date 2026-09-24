/*
 * File: EX_6.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to calculate the sum of natural numbers.
 */

#include <stdio.h>

int main(){

	int i, sum=0;

	printf("Enter an integer: ");

	fflush(stdout);

	scanf("%d", &i);

	for(int j=1; j<=i; j++)
		sum+=j;

	printf("Sum: %d",sum);

	return 0;
}
