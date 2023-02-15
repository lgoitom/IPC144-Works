#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey(void);
void gradeMessage(char grade);
int yes(void);
int main(void) {
	char grade;
	do {
		printf("enter the grade: ");
		grade = getchar();
		flushKey();
		gradeMessage(grade);
		printf("Continue? \n");
	}
	while (yes());
	return 0;
}


void gradeMessage(char grade) {
	switch (grade) {
	case 'A':
	case 'a':
		printf("excellent");
		break; // breaks execution of switch and jumps to end
	case 'B':
	case 'b':
		printf("very good");
		break;
	case 'C':
	case 'c':
		printf("ok");
		break;
	case 'D':
	case 'd':
		printf("work harder");
		break;
	case 'F':
	case 'f':
		printf("you nned to work much harder");
		break;
	default:
		printf("invalid");
	}
	return 0;
}