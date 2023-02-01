#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void line(char fill, int length);

void rectangle(char leftTop, char top, char topRight, char right, char rightButtom, char buttom, char buttomLeft, char left, char fill, int width, int height) {
	int i;

	for (i = 0; i < leftTop; i++) {
		if (0 < i < 1) {
			putchar(leftTop);
		}
		/*else {
			putchar(top, 20);
		}*/
	}

}


void line(char fill, int length) {
	int i;

	for(i = 0; i < length; i++) {
		putchar(fill);
	}
}