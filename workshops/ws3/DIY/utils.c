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
		
		if (scanf("%d", &value) == 1) {   // \n
			ch = getchar();
			// if ch is not new line,
			//       print error (only an int)
			//		   flush keyboard
		   // else:
			done = 1;
		}
		else if (scanf("%d", &value) != 1){
			flushKey();
			printf("Invalid Integer, try again: ");
		}
	}
	return value;

	/*it still prints user input integer even when other characters r inputed.ex: user input : 10abc, program output : you entered 10.
	* also doesnt allow user to input integer from 10 to 20 when another character is inputed*/
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
			printf("Invalid Integer, try again: "); // fix the error message....
		}
	}
	return value;
}