/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
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
