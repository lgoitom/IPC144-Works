#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

char getSingleChar(void) {
   char ch = getchar();
   flushKey();
   return ch;
}
int getInt(void) {
   int sku;
   int done = 0;
   while(!done) {
      if(scanf("%d", &sku) == 1) {
         done = 1;
      }
      else { // user enterd non integer
         flushKey();
         printf("Invalid selection!");
      }
   }
   flushKey();
   return sku;
}

void flushKey(void) {
   char ch = 'x';
   while(ch != '\n') {
      ch = getchar();
   }
}

int yes(void) {
   int res;
   char resp;
   printf("(Y)es or (N)o: ");
   resp = getSingleChar();
   if(resp == 'Y' || resp == 'y') {
      res = 1;
   } else {
      res = 0;
   }
   return res;
}