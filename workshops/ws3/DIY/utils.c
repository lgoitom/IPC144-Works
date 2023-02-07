#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

	while (!done) {
		
		if (scanf("%d", &value) == 1) {
			done = 1;
			return value;
		}
		else if (scanf("%d", &value) != 1){
			char ch = 'x';
			while (ch != '\n') {
				ch = getchar();
			}
			printf("Invalid Integer, try again: ");
		}
	}

	/*it still prints user input integer even when other characters r inputed.ex: user input : 10abc, program output : you entered 10.
	* also doesnt allow user to input integer from 10 to 20 when another character is inputed*/

}

int getIntMM(int min, int max) {
	int value;
	int done = 0;

	while (!done) {
		if (min < scanf("%d", &value) < max) {
			done = 1;
			return value;
		}
		else if (scanf("%d", &value) < min && scanf("%d", &value) > max) {
			char ch = 'x';
			while (ch != '\n') {
				ch = getchar();
			}
			printf("Invalid Integer, try again: ");
		}
	}
}