#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
#include "utils.h"

void subjectMarksReport(void) {

	char subjectName[9 + 1];
	int numStudents;
	int mark[50];
	int studentNumber[50];
	int rowNum;


	printf("Enter subject Name: ");
	scanf("%s", subjectName);
	printf("Enter Number of students (max 50): ");
	scanf("%d", &numStudents);
	printf("Please enter %d student marks:\n", numStudents);
	for (rowNum = 0; rowNum < numStudents; rowNum++) {

		printf("%d of %d:\n", rowNum + 1, numStudents);
		printf("Student Number: ");
		studentNumber[rowNum] = getMMInt(9999, 1000000, "Student Number");
		printf("Mark: ");
		mark[rowNum] = getMMInt(0, 100, "Mark");
		
	}
	printf("\n");
	printReport(subjectName, studentNumber, mark, numStudents);
}

void printReport(const char subjectCode[], const int studentNumbers[],
	const int marks[], int noOfStudents) {

	int average=0;
	int highest = marks[0];
	int lowest = marks[0];
	int i=0;
	int totalMarks = 0;

	printf(" SUBJECT MARKS REPORT!\n");
	printf(" +-------------------+\n");
	printf(" | %-18s|\n", subjectCode);
	printf(" +---+--------+------+\n");
	char stdNo[10] = "Std No";
	char markStr[10] = "mark";
	char row[10] = "Row";
	printf(" |%s", row);
	printf("|%7s |", stdNo);
	printf("%5s |\n", markStr);
	printf(" +---+--------+------+\n");

	for (i = 0; i < noOfStudents; i++) {
		printf(" | %d | 0%-4d |%5d |\n", i + 1, studentNumbers[i], marks[i]);
	}
	printf(" +---+--------+------+\n");
	for (i = 0; i < noOfStudents; i++) {
		totalMarks += marks[i];
//		average = totalMarks / noOfStudents;  // wasting computer time by repeating what can be done only once

		if (highest < marks[i]) {
			highest = marks[i];
		}

		if (lowest > marks[i]) {
			lowest = marks[i];
		}
	}
	average = totalMarks / noOfStudents;  // do

	printf(" | %-11s|", "Average");
	printf("%5d |\n", average);
	printf(" | %-11s|", "Highest");
	printf("%5d |\n", highest);
	printf(" | %-11s|", "Lowest");
	printf("%5d |\n", lowest);
	printf(" +------------+------+\n");
}
