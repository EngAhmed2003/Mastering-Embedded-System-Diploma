/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Reverse a sentence using recursion.
 */

#include <stdio.h>

void Reverse();

int main(void){

	printf("Enter a sentence: ");

	fflush(stdout);

	Reverse();

	return 0;
}

void Reverse(){

	char c;

	scanf("%c",&c);

	if(c != '\n'){

		Reverse();

		printf("%c",c);
	}
}
