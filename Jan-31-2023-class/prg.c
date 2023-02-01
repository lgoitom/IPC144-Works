//recieve mark and conver to letter grade and do it over again

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getRep();
void markToGrade();
int main(void) {
	int cnt;
	int i;
	cnt = getRep();
	for (i = 0; i < cnt; i++) {
		markToGrade();
	}
	return 0;
}

int getRep() {
	int value;
	printf("how many times\n> ");
	scanf("%d", &value);
	return value;
}
