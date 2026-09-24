/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* Write C Program to check Whether a Number is Even or Odd  */

#include <stdio.h>

int main(){

	int i;

	for(int j=0; j<2; j++){

		printf("Enter an integer you want to check: ");

		fflush(stdin); fflush(stdout);

		scanf("%d",&i);


		if(i%2==0)
			printf("%d is even \n",i);

		else
			printf("%d is odd \n",i);
	}
	return 0;
}
