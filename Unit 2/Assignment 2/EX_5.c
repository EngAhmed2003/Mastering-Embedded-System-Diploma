/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


														/* C Program to Check Whehter a Character is an Alphabet or not */

#include <stdio.h>

int main(){

	char i;

	for(int j=0; j<2; j++){

		printf("Enter an alphabet : ");

		fflush(stdin); fflush(stdout);

		scanf("%c", &i);

		if((i>='a' && i<='z') || (i>='A' && i<='Z'))
			printf("%c is an alphabet\n", i);

		else
			printf("%c is not an alphabet\n", i);
	}
	return 0;
}
