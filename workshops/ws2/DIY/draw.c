//#define _CRT_SECURE_NO_WARNINGS no need since no scanf or string.h functions
#include <stdio.h>
void line(char fill, int length);

void rectangle(char leftTop, char top, char topRight,
              char right, char rightButtom, char buttom,
              char buttomLeft, char left, char fill,
              int width, int height) {
   int i;

   putchar(leftTop);
   line(top, width - 2);
   putchar(topRight);
   putchar('\n');

   for (i = 0; i < height - 2; i++) {
      putchar(left);
      line(fill, width - 2);
      putchar(right);
      putchar('\n');
   }

   putchar(buttomLeft);
   line(buttom, width - 2);
   putchar(rightButtom);
   putchar('\n');

}


void line(char fill, int length) {
   int i;

   for(i = 0; i < length; i++) {
      putchar(fill);
   }
}