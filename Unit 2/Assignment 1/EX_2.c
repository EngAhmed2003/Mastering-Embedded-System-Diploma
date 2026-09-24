/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to print an integer entered by the user.
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
