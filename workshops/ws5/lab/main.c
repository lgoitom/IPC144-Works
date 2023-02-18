/***********************************************************************
// IPC Workshop 5 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
//  Implement the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
// include required custome header file(s)


int main(void) {
	 //create two integer variables for the loop couner 
	 //and number of students


	 //create two integer arrays (size of 50) to hold the 
	 //marks and the student number of students.


	 //add cString capable of holding 9 characters (+1 for null byte) 
	 //for the subject code 

	char subjectName[9+1];
	int numStudents;
	int mark[50];
	int studentNumber[50];
	int rowNum;

	printf("Enter subject Name: ");
	// read the subject name using scanf
	scanf("%s", subjectName);



	printf("Enter the number of students (max 50): ");
	// read the number of students 
	scanf("%d", &numStudents);


	// Prompt the user to enter the student numbers and marks
	printf("Enter %d student numbers and student marks...\n", numStudents);
	// as displayed in the description of the workshop
	for (rowNum = 0; rowNum < numStudents; rowNum++) {
		
		printf("%d:\n", rowNum + 1);
		printf("Student Number: ");
		scanf("%d",&studentNumber[rowNum]);
		printf("Mark: ");
		scanf("%d", &mark[rowNum]);
		
	}
	printf("\n");


	// write a loop to get each student number and student mark into
	// the elelments of the array as described in the workshop







	 //Call print report passing the received data.
	printReport(subjectName, studentNumber, mark, numStudents);

	
	return 0;
}