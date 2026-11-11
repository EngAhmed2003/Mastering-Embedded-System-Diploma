/*
 * File: EX_10.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Find the maximum number of consecutive ones between two zeros in a binary representation.
 */

#include <stdio.h>

int count_max_num(int arr[], int x);

int main(void){

	int num, bin[32];

	printf("Enter an integer number: ");

	fflush(stdout);

	scanf("%d", &num);

	printf("\n%d", count_max_num(bin, num));

}

int count_max_num(int arr[], int x){

	int n, ones=0, max=0, i;

	for(i=0; i<32; i++){

		n=x%2;

		arr[32-1-i]=n;

		x=x/2;
	}

	for(i=0; i<32; i++){

		printf("%d", arr[i]);
	}

	for(i=0; i<32; i++){

		if(arr[i]==1){

			ones++;
		}

		else{

			if(ones>max)
				max=ones;

			ones=0;
		}
	}

	return max;
}
