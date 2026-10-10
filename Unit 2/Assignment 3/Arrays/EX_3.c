/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to calculate and display the transpose of a matrix.
 */

#include <stdio.h>

int main(void)
{
	int rows, columns, i, j;

	printf("Enter rows and columns of matrix: ");

	fflush(stdout);

	scanf("%d %d", &rows, &columns);

	int arr[rows][columns], trans[columns][rows];

	printf("\nEnter elements of matrix: \n");

	for(i=0; i<rows; i++){

		for(j=0; j<columns; j++){

			printf("Enter an element a%d%d: ", i+1, j+1);

			fflush(stdout);

			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nEntered matrix: ");

	for(i=0; i<rows; i++){

		printf("\n");

		for(j=0; j<columns; j++){

			printf("%d\t", arr[i][j]);
		}

		printf("\n");
	}

	for(i=0; i<rows; i++){

		for(j=0; j<columns; j++){

			trans[j][i] = arr[i][j];
		}
	}

	printf("\nTransposed matrix: ");

	for(i=0; i<columns; i++){

		printf("\n");

		for(j=0; j<rows; j++){

			printf("%d\t", trans[i][j]);
		}

		printf("\n");
	}
}
