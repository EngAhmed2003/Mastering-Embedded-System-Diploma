/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: C program to reverse a string.
 */

#include <stdio.h>

int main(void){

  char arr[100], rev[100];

  int len=0, i;

  printf("Enter the string: ");

  fflush(stdout);

  fgets(arr, sizeof(arr), stdin);

  for(i=0; arr[i]!='\0'; i++){

    len++;
  }

  if(len>0 && arr[len-1]=='\n' ){

    arr[len-1]='\0';

    len--;
  }

  for(i=0; i<len; i++){

    rev[i] = arr[len-1-i];
  }

  rev[len]='\0';

  printf("Reverse string is: %s", rev);
}

