/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
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
