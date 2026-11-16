/*
 * File: EX_3.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Add two complex numbers by passing structures to a function.
 */

#include <stdio.h>

struct SAdd_Two_Complex_nums{

	float reel;

	float imaginary;

};

struct SAdd_Two_Complex_nums calc_complex_nums(struct SAdd_Two_Complex_nums num1, struct SAdd_Two_Complex_nums num2);

int main(void){

	struct SAdd_Two_Complex_nums gs1, gs2, result;

	printf("Enter information for 1st complex number: \n");

	printf("Enter reel and imaginary respectively: ");

	fflush(stdout);

	scanf("%f", &gs1.reel);

	scanf("%f", &gs1.imaginary);

	printf("\n");

	printf("Enter information for 2nd complex number: \n");

	printf("Enter reel and imaginary respectively: ");

	fflush(stdout);

	scanf("%f", &gs2.reel);

	scanf("%f", &gs2.imaginary);

	result = calc_complex_nums(gs1, gs2);

	printf("\nsum = %.1f""+""%.1f""i", result.reel, result.imaginary);

}

struct SAdd_Two_Complex_nums calc_complex_nums(struct SAdd_Two_Complex_nums num1, struct SAdd_Two_Complex_nums num2){

	struct SAdd_Two_Complex_nums result;

	result.reel = num1.reel + num2.reel;

	result.imaginary = num1.imaginary + num2.imaginary;

	return result;

}
