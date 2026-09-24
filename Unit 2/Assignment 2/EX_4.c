/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to check whether a number is positive, negative, or zero.
 */

#include <stdio.h>

int main(){

	float i;

	for(int j=0; j<2; j++){

		printf("Enter a number : ");

		fflush(stdout);

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
