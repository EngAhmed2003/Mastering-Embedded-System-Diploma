/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to calculate the average of a set of numbers.
 */

#include <stdio.h>

int main(void)
{
	int num;

	float sum=0, avg, arr[100];

	printf("Enter the numbers of data: ");

	fflush(stdout);

	scanf("%d", &num);


	if(num<=0 || num>100){

		printf("Invalid number of data.\n");

		return 1;
	}

	for (int i=0; i<num; i++){

		printf("Enter number: ");

		fflush(stdout);

		scanf("%f", &arr[i]);
	}

	for (int i=0; i<num; i++){

		sum += arr[i];
	}

	avg = sum/num;

	printf("Average = %.2f", avg);


}
