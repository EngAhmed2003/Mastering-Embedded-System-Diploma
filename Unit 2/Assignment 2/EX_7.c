/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* C Program to Find Factorial of a Number */

#include <stdio.h>

int main(){

	int i, f=1;

	for(int k=0; k<2; k++){

		printf("Enter an integer: ");

		fflush(stdout);

		scanf("%d", &i);

		if (i<0)
			printf("Error!!! Factorial of negative numbers doesn't exist\n");

		else{

			for(int j=1; j<=i; j++){

				f *= j;
			}

			printf("Factorial = %d\n", f);
		}
	}
	return 0;
}
