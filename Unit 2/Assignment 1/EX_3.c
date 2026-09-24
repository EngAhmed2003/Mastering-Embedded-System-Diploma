/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* C Program to Add Two Integers */

#include <stdio.h>

int main(){

	int i, j;

	printf("Enter two integers: ");

	fflush(stdin); fflush(stdout);

	scanf("%d %d",&i, &j);

	printf("Sum: %d",i+j);

	return 0;

}
