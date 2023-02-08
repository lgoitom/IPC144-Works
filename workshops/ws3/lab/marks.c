#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int getNoOfStudents(void) {
	int num;
	
	printf("Please enter the number of students: ");
	scanf("%d", &num);
	
	return num;

}

int getAverage(int NumberOfStudents) {
	int sum = 0;
	int average;
	int mark=0;
	int counter = 0;

	printf("Enter %d student marks...\n", NumberOfStudents);

	while (counter < NumberOfStudents) {
		printf("%d> ", counter + 1);
		scanf("%d", &mark);
		if (mark < 0) {
			printf("Invalid Mark, values should be greater than or equal to 0.\n");
		}
		else if (mark > 100) {
			printf("invalid Mark, values should be less than or equal to 100.\n");
		}
		else {
			counter++;
			sum += mark;
		}
	}

	average = sum / NumberOfStudents;


	/*while (mark) {
		if (mark < 0) {
			printf("error");
		}
		else if (mark > 100) {
			printf("error");
		}
	}*/
	/*for (counter = 0; counter < NumberOfStudents; counter++) {
		invalidMark();
	}*/
	/*getStudentMarks(NumberOfStudents);
	mark = invalidMark();*/

	//printf("%d> ", counter + 1);
	//scanf("%d", &mark);

	/*if (mark >= 0 && mark <= 100) {
		for (counter = 0; counter < NumberOfStudents; counter++) {
			printf("%d", mark);
		}
		putchar('\n');
	}
	else */


	//mark = invalidMark();

	/*if (mark > 100 && mark < 0) {
		printf("invalid mark");
	}
	else if (mark <= 100 && mark >= 0) {
		printf("%d> ", counter + 1);
		scanf("%d", &mark);
	}*/

	/*while (counter < NumberOfStudents, counter++) {
		printf("%d> ", counter + 1);
		scanf("%d", &mark);
	}
	if (mark > 100 && mark < 0) {
		printf("invalid mark");
	}
	else {
		printf("%d> ", counter + 1);
		scanf("%d", &mark);
	}*/
	return sum, average;
}

void printReport(int NumberOfStudents, int average, int mark) {
	//int sum;
	//int average;

	printf("Number of students: %d\n", NumberOfStudents);
	printf("Class average: %d (%c)", average, mark);
}

/*int getStudentMarks(int NumberOfStudents) {
	int counter;
	int mark;
		printf("%d> ", counter + 1);
		scanf("%d", &mark);
	return mark;
}*/

/*int invalidMark() {
	int mark;
	if (mark > 100 && mark < 0) {
		printf("invalid mark");
	}
	else if (mark <= 100 && mark >= 0) {
		return mark;
	}
}*/