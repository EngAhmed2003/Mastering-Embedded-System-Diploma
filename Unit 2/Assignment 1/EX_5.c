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

	char i;

	printf("Enter a character: ");

	fflush(stdin); fflush(stdout);

	scanf("%c",&i);

	printf("Product: %d",i);

	return 0;

}
