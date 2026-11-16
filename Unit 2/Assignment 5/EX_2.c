/*
 * File: EX_2.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Add two distances in feet and inches using a structure.
 */

#include <stdio.h>

struct SAdd_Two_Distances{

	int feet;

	float inch;

} gs1, gs2, result;

int main(void){

	printf("Enter information for 1st distance: \n");

	printf("Enter feet: ");

	fflush(stdout);

	scanf("%d", &gs1.feet);

	printf("Enter inch: ");

	fflush(stdout);

	scanf("%f", &gs1.inch);

	printf("\nEnter information for 2nd distance: \n");

	printf("Enter feet: ");

	fflush(stdout);

	scanf("%d", &gs2.feet);

	printf("Enter inch: ");

	fflush(stdout);

	scanf("%f", &gs2.inch);

	result.feet= gs1.feet+gs2.feet;

	result.inch= gs1.inch + gs2.inch;

	while(result.inch>=12){

		result.feet++;

		result.inch-=12;
	}

	printf("\nsum of distance = %d""\'-" "%.1f""\"", result.feet, result.inch);
}
