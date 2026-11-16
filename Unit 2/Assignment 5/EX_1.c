/*
 * File: EX_1.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Store and display a student's name, roll number, and marks using a structure.
 */

#include <stdio.h>

struct SStudent_Information{

	char name[50];

	int roll_number;

	float marks;

} gs;

int main(void){

	printf("Enter a name: ");

	fflush(stdout);

	scanf("%s", gs.name);

	printf("Enter roll_number: ");

	fflush(stdout);

	scanf("%d", &gs.roll_number);

	printf("Enter marks: ");

	fflush(stdout);

	scanf("%f", &gs.marks);

	printf("\nName: %s\n", gs.name);

	printf("Roll: %d\n", gs.roll_number);

	printf("Marks: %.2f\n", gs.marks);
}
