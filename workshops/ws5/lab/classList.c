#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"

void printReport(const char subjectCode[], const int studentNumbers[],
	const int marks[], int noOfStudents) {
	
	int average;
	int highest = marks[0];
	int lowest = marks[0];
	int i;
	int totalMarks = 0;
	
	printf("SUBJECT MARKS REPORT!\n");
	printf("  +---------------+\n");
	printf("  | %-14s|\n", subjectCode);
	printf("  +--------+------+\n");
	char stdNo[10] = "Std No";
	char markStr[10] = "mark";
	printf("  |%7s |", stdNo);
	printf("%5s |\n", markStr);
	printf("  +--------+------+\n");

	for (i = 0; i < noOfStudents; i++) {
		printf("  | 0%-4d |%5d |\n", studentNumbers[i], marks[i]);
		
		
	}
	printf("  +--------+------+\n");
	for (i = 0; i < noOfStudents; i++) {
		totalMarks += marks[i];
		average = totalMarks / noOfStudents;
		
			if (highest < marks[i]) {
				highest = marks[i];
			}
			
			if (lowest > marks[i]) {
				lowest = marks[i];
			}
				
		
		
	}
	
	
	
	
	
	
	

	
	char avg[10] = "Average";
	char max[10] = "Highest";
	char min[10] = "Lowest";
	printf("  |%-8s|", avg);
	printf("%5d |\n", average);
	printf("  |%-8s|", max);
	printf("%5d |\n", highest);
	printf("  |%-8s|", min);
	printf("%5d |\n", lowest);
	printf("  +--------+------+\n");

	



}
