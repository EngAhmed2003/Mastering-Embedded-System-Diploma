/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to count the frequency of a character in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void){

	char str[100], ch;

	int len, i, freq=0;

	printf("Enter a string: ");

	fflush(stdout);

	scanf("%99[^\n]", str);


	printf("enter a character to find frequency: ");

	fflush(stdout);

	scanf(" %c", &ch);

	len = strlen(str);

	for (i=0; i<len; i++){

		if(str[i]==ch)
			freq+=1;
	}

	printf("Frequency of %c = %d", ch, freq);
}
