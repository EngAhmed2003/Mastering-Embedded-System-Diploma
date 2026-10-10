/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to multiply four numbers while using continue to skip zero values.
 */

#include <stdio.h>

int main(void)
{
	int num, product=1, check=0;

	for(int j=1; j<=4; j++){

		printf("Enter num%d: ", j);

		fflush(stdout);

		scanf("%d", &num);

		if(num == 0){

			check++;

			continue;
		}

		product *= num;
	}

	if(check==4)
		printf("product = 0");

	else
		printf("product = %d", product);
}
