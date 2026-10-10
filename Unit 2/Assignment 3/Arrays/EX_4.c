/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to insert an element at a specified location in an array.
 */

#include <stdio.h>

int main(void){

	int num, ele, loc, i;

	printf("Enter no of elements: ");

	fflush(stdout);

	scanf("%d", &num);

	if(num<=0){

		printf("Invalid number of data.\n");

		return 1;
	}

	int arr[num+1];

	printf("Enter the elements: ");

	fflush(stdout);

	for(i=0; i<num; i++){

		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be inserted: ");

	fflush(stdout);

	scanf("%d", &ele);


	printf("Enter the location: ");

	fflush(stdout);

	scanf("%d", &loc);

	if(loc>num+1 || loc<=0){

		printf("Invalid number of data.\n");

		return 1;
	}

	for(i=num; i>=loc; i--){

		arr[i] = arr[i-1];
	}

	arr[loc-1] = ele;

	printf("The new array: ");

	for(i=0; i<=num; i++){

		printf("%d ", arr[i]);
	}
}
