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

	for(int j=0; j<2; j++){

		printf("Enter an alphabet to check: ");

		fflush(stdin); fflush(stdout);

		scanf("%c",&i);


		if((i == 'a') || (i == 'e') || (i == 'o') || (i == 'i') || (i == 'A') || (i == 'E') || (i == 'O') || (i == 'I'))
			printf("%c is vowel \n",i);

		else
			printf("%c is constant \n",i);
	}
	return 0;
}
