/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to add two integers.
 */


#include <stdio.h>

int main(){

	int i, j;

	printf("Enter two integers: ");

	fflush(stdout);

	scanf("%d %d",&i, &j);

	printf("Sum: %d",i+j);

	return 0;

}
