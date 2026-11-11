/*
 * File: EX_8.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Print the elements of an array in reverse order using recursion.
 */

#include <stdio.h>

void reverse_arr(int arr[], int size);

int main(void){

	int a[5]={1,2,3,4,5};

	reverse_arr(a, 5);
}

void reverse_arr(int arr[], int size){

	if(size!=0){

		printf("%d ", arr[size-1]);

		size--;

		reverse_arr(arr, size);
	}
}
