/*
 * File: EX_4.c
 * Author: Ahmed Mohamed Al-Qasabi
 * Description: Store and display information for 10 students using an array of structures.
 */

#include <stdio.h>

struct SStudent_Information{

	char name[10];

	int roll_number;

	int marks;

} gs[10];

int main(void){

	printf("Enter Information of students: \n");

	for(int i=0; i<10; i++){

		printf("Information For roll number: ");

		fflush(stdout);

		scanf("%d", &gs[i].roll_number);

		printf("Enter name: ");

		fflush(stdout);

		scanf("%s", gs[i].name);

		printf("Enter marks: ");

		fflush(stdout);

		scanf("%d", &gs[i].marks);

		printf("\n");
	}

	printf("\ndisplay information of student: \n");

	for(int j=0; j<10; j++){

		printf("Information For roll number: %d\n", gs[j].roll_number);

		printf("%s\n", gs[j].name);

		printf("%d\n", gs[j].marks);
	}
}
