/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* Source Code to Swap Two Numbers */

#include <stdio.h>

int main(){

	float i, j, temp;

	printf("Enter a value of A: ");

	fflush(stdin); fflush(stdout);

	scanf("%f",&i);

	printf("Enter a value of B: ");

	fflush(stdin); fflush(stdout);

	scanf("%f",&j);

	temp = i;

	i = j;

	j = temp;

	printf("After swapping, value of a: %.2f\n",i);

	printf("After swapping, value of a: %.1f\n",j);

	return 0;

}
