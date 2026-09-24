/*
 ============================================================================
 Name        : Assignment.c
 Author      : Ahmed Mohamed Al-Qasabi
 Version     :
 Copyright   : Copyright (c) ${date:2026} Ahmed Mohamed Bassiouni Al-Qasabi
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

														/* C Program to Check Whether a Number is Positive or Negative */

#include <stdio.h>

int main(){

	float i;

	for(int j=0; j<2; j++){

		printf("Enter a number : ");

		fflush(stdin); fflush(stdout);

		scanf("%f", &i);


		if(i==0)
			printf("You entered Zero\n");

		else if(i>0)
			printf("%.2f is Positive\n",i);

		else if(i<0)
			printf("%.2f is Negative\n",i);
	}
	return 0;
}
