#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void title(void);
void line(void);
void info(void);
void totalAverage(void);

int main(void) {
   title();
   line();
   info();
   line();
   totalAverage();
   line();
   return 0;
}

void title(void) {
   printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

void line(void) {
   printf("------------------------------------------------------------\n");
}

void info(void) {
   printf("Name:\n\tLuwam Goitom-Worre--\n"); // to lower the number of function calls
   printf("Email:\n");
   printf("\tlgoitom-worre@myseneca.ca--\n");
}

void totalAverage(void) {
   int ipc, uli, eac, avg;
   printf("Enter the marks for the following subjects,\n");
   printf("IPC144: ");
   scanf("%d", &ipc);
   printf("ULI101: ");
   scanf("%d", &uli);
   printf("EAC150: ");
   scanf("%d", &eac);
   avg = (ipc + uli + eac) / 3;
   printf("The average is: %d\n", avg);
}
