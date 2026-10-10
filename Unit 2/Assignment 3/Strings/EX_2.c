/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to calculate the length of a string.
 */

#include <stdio.h>

int main(void){

	char arr[100];

	int len=0;

	printf("Enter a string: ");

	fflush(stdout);

	fgets(arr, sizeof(arr), stdin);

	for(int i=0; arr[i]!='\0'; i++)
		len++;

	if(len>0 && arr[len-1]=='\n' ){

		arr[len-1]='\0';

		len--;
	}
	
	printf("Length of string: %d", len);
}
