/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* C Program to Print a Integer Entered by a User */

#include <stdio.h>

int main(){

	int i;

	printf("Enter an integer: ");

	fflush(stdout);

	scanf("%d",&i);

	printf("You entered: %d",i);

	return 0;

}
