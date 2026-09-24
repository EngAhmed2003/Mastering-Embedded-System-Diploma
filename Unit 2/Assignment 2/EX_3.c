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

	float i, j, k;


	printf("Enter three number : ");

	fflush(stdin); fflush(stdout);

	scanf("%f %f %f",&i, &j, &k);


	if(i>j && i>k)
		printf("Largest number is: %.2f\n",i);

	else if(j>i && j>k)
		printf("Largest number is: %.2f\n",j);

	else if(k>i && k>j)
		printf("Largest number is: %.2f\n",k);

	return 0;
}
