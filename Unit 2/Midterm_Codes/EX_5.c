/*
 * File: EX_5.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Convert an integer to binary digits and count the number of ones.
 */

#include <stdio.h>

int calc_ones(int x);

int convert_to_bin(int k);

int main(void){

	int num, bin, ones;

	printf("Enter a number: ");

	fflush(stdout);

	scanf("%d", &num);

	bin= convert_to_bin(num);

	ones= calc_ones(bin);

	printf("binary of %d is %d so has %d ones", num, bin, ones);
}

int convert_to_bin(int k){

	if(k!=0)
		return k%2 + 10 * convert_to_bin(k/2);

	return 0;
}

int calc_ones(int x){

	int y, count=0;

	if(x!=0){
		y = x%10;

		if(y==1)
			count=1;

		return count + calc_ones(x/10);
	}

	return 0;
}
