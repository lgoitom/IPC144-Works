#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getMark();
void markToGrade() {
	int mark;
	mark = getMark();
	if (mark >= 0 && mark < 50) {
		printf("F\n");
	}
	else if (mark >= 50 && mark < 60) {
		printf("D\n");
	}
	else if (mark >= 60 && mark < 70) {
		printf("C\n");
	}
	else if (mark >= 70 && mark < 80) {
		printf("B\n");
	}
	else if (mark >= 80 && mark < 90) {
		printf("A\n");
	}
	else if (mark >= 90 && mark <= 100) {
		printf("A+\n");
	}
	else {
		printf("%d is not a valid mark\n", mark);
	}
	putchar('\n');
}

int getMark() {
	int mark;
	printf("mark: ");
	scanf("%d", &mark);
	return mark;
}