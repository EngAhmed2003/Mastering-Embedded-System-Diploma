/*
 * File: EX_9.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Reverse the order of words in a string.
 */

#include <stdio.h>

#include <string.h>


void reverse_string(char arr[], int size);


int main(void){

	char name[]= "mohamed gamal";

	int len= strlen(name);

	reverse_string(name, len);

}

void reverse_string(char arr[], int size){

	int count=0;
	char reverse[size+1];

	for(int i=0; i<size; i++){

		reverse[size-1-i]= arr[i];
	}

	reverse[size] = '\0';

	for(int j= 0; j<=size; j++){

		if(reverse[j]==' '){

			INDEX1:

			printf("%c", reverse[j-1]);

			j--;

			count++;

			if(j!=0 && reverse[j-1]!=' ')
				goto INDEX1;

			j=j+count;

			count=0;

			printf(" ");
		}

		if(reverse[j]=='\0'){

			INDEX2:

			printf("%c", reverse[j-1]);

			j--;

			count++;

			if(j!=0 && reverse[j-1]!=' ')
				goto INDEX2;

			j=j+count;
		}
	}
}
