/***********************************************************************
// IPC Workshop 3 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file will be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average);
void prnGrade(mark);
int main(void) {
	int num;
	int average;
	printf("Class test marks report program...\n\n");
	num = getNoOfStudents();
	average = getAverage(num);
	printReport(num, average);
	return 0;
}




// tester for prnGrade function

/*int main(void) {
	int mark;
	printf("Mark: ");
	scanf("%d", &mark);
	prnGrade(mark);
	return 0;
}*/

void prnGrade(int mark) {
	printf("the grade is: %d\n", mark);
	if (mark >= 0 && mark < 50) {
		printf("F");
	}
	else if (mark >= 50 && mark < 55) {
		printf("D");
	}
	else if (mark >= 55 && mark < 60) {
		printf("D+");
	}
	else if (mark >= 60 && mark < 65) {
		printf("C");
	}
	else if (mark >= 65 && mark < 70) {
		printf("C+");
	}
	else if (mark >= 70 && mark < 75) {
		printf("B");
	}
	else if (mark >= 75 && mark < 80) {
		printf("B+");
	}
	else if (mark >= 80 && mark < 85) {
		printf("A-");
	}
	else if (mark >= 85 && mark < 90) {
		printf("A");
	}
	else if (mark >= 90 && mark <= 100) {
		printf("A+");
	}
}