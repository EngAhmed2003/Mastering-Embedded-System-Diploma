/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to add two 2x2 matrices.
 */

#include <stdio.h>

int main(void)
{
	int i, j;
	float arr1[2][2], arr2[2][2], sum[2][2];

	printf("Enter the elements of first matrix:\n");

	for(i=0; i<2; i++){

		for(j=0; j<2; j++){

			printf("Enter a%d%d: ", i+1, j+1);

			fflush(stdout);

			scanf("%f", &arr1[i][j]);
		}
	}

	printf("\nEnter the elements of secound matrix:\n");

	for(i=0; i<2; i++){

		for(j=0; j<2; j++){

			printf("Enter b%d%d: ", i+1, j+1);

			fflush(stdout);

			scanf("%f", &arr2[i][j]);
		}
	}

	for(i=0; i<2; i++){

		for(j=0; j<2; j++){

			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("\nSum of Matrix:\n");
	for(i=0; i<2; i++){

		for(j=0; j<2; j++){

			printf("%.1f\t", sum[i][j]);
		}
		printf("\n");
	}
}
