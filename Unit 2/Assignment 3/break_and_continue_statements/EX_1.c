/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to calculate the average of non-negative numbers using break to stop input when a negative number is entered.
 */

#include <stdio.h>

int main(void)
{
	float num, sum=0, avg;

	int max_num, count=0;

	printf("Enter maximum number of inputs: ");

	fflush(stdout);

	scanf("%d", &max_num);

	if(max_num<=0){

		printf("Invalid number of data.\n");

		return 1;
	}

	for(int j=1; j<=max_num; j++){

		printf("Enter num%d: ", j);

		fflush(stdout);

		scanf("%f", &num);

		if(num>=0){

			sum += num;

			count += 1;
		}

		else
			break;
	}

	if(count==0)
		printf("No non-negative numbers were entered");

	else{

		avg = sum/count;

		printf("Average = %.2f", avg);
	}
}
