/*
 * File: EX_5.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to search for an element in an array.
 */

#include <stdio.h>

int main(void){

	int num;

	printf("Enter no of elements: ");

	fflush(stdout);

	scanf("%d", &num);

	if(num<=0){

		printf("Invalid number of data.\n");

		return 1;
	}

	int arr[num], i, ser, loc, found=0;

	printf("Enter the elements of the array: ");

	fflush(stdout);

	for(i=0; i<num; i++){

		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be searched: ");

	fflush(stdout);

	scanf("%d", &ser);

	for(i=0; i<num; i++){

		if(ser == arr[i]){

			loc=i;
			found=1;
			break;
		}
	}

	if(found!=1)
		printf("!!!ERROR!!! please enter a number that you inserted in array. ");

	else
		printf("Number found at location: %d", loc+1);
}
