#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKey(void) {
	char ch = 'x';
	while(ch != '\n') {
		ch = getchar();
	}
}
void line(char fill, int length) {
	int i;

	for (i = 0; i < length; i++) {
		putchar(fill);
	}
	putchar('\n');
}

int getInt(void) {

	int value;
	int done = 0;
	char ch;
	while (!done) {
		
		if (scanf("%d", &value) == 1) {  
			ch = getchar();
			if (ch != '\n') {
				printf("Enter only an integer, try again: ");
				flushKey();
			}
			else {
				done = 1;
			}
		}
		else if (scanf("%d", &value) != 1){
			flushKey();
			printf("Invalid Integer, try again: ");
		}
	}
	return value;

}

int getIntMM(int min, int max) {
	int value;
	int done = 0;

	while (!done) {
		value = getInt();
		if (min <= value && max >= value) {
			done = 1;
		}
		else {
			printf("[10<=Number<=20], try again: "); 
		}
	}
	return value;
}

double getDouble(void) {
	double dvalue;
	int done = 0;
	char ch;

	while (!done) {
		if (scanf("%lf", &dvalue) == 1) {
			ch = getchar();
			if (ch != '\n') {
				printf("Enter only a Double, try again: ");
				flushKey();
			}
			else {
				done = 1;
			}
		}
		else if (scanf("%lf", &dvalue) != 1) {
			flushKey();
			printf("Invalid Double, try again: ");
		}
	}
	return dvalue;

}

double getDoubleMM(double min, double max) {
	double dvalue;
	int done = 0;

	while (!done) {
		dvalue = getDouble();
		if (min <= dvalue && max >= dvalue) {
			done = 1;
		}
		else {
			printf("[10.100<=Number<=20.100], try again: ");
		}
	}
	return dvalue;
}