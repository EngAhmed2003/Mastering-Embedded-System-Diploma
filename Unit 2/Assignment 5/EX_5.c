/*
 * File: EX_5.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Calculate the area of a circle using macros.
 */

#include <stdio.h>

#define PI (double)22/7

#define area(r) (PI * r * r)

int main(void){

	float radius;

	printf("Enter the radius: ");

	fflush(stdout);

	scanf("%f", &radius);

	printf("Area = %.2f", area(radius));
}
