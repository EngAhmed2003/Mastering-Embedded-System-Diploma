/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to check whether a number is even or odd.
 */

#include <stdio.h>

int main(){

	int i;

	for(int j=0; j<2; j++){

		printf("Enter an integer you want to check: ");

		fflush(stdout);

		scanf("%d",&i);


		if(i%2==0)
			printf("%d is even \n",i);

		else
			printf("%d is odd \n",i);
	}
	return 0;
}
