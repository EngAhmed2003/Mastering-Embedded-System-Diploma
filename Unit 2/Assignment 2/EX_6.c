/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(){

	int i, sum=0;

	printf("Enter an integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d", &i);

	for(int j=1; j<=i; j++)
		sum+=j;

	printf("Sum: %d",sum);

	return 0;
}
