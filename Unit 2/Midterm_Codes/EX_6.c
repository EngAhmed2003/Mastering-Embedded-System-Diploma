/*
 * File: EX_6.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Find the unique number in an array using one loop and XOR.
 */

#include <stdio.h>

int Find_unique_number(int a[], int size);

int main(void){

	int a[7]={4,2,5,2,5,7,4};

	printf("%d", Find_unique_number(a, 7));
}

int Find_unique_number(int a[], int size){

	int result=0;

	for(int i=0; i<size; i++){

		result = result ^ a[i];
	}

	return result;
}
