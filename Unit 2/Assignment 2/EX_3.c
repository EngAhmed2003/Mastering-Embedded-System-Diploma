/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Program to find the largest number among three numbers.
 */

/* C Program to Find the Largest Number Among Three Numbers */

#include <stdio.h>

int main(){

	float i, j, k;


	printf("Enter three number : ");

	fflush(stdout);

	scanf("%f %f %f",&i, &j, &k);


	if(i>j && i>k)
		printf("Largest number is: %.2f\n",i);

	else if(j>i && j>k)
		printf("Largest number is: %.2f\n",j);

	else if(k>i && k>j)
		printf("Largest number is: %.2f\n",k);

	return 0;
}
