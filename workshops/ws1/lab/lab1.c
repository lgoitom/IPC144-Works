#include <stdio.h>

void title(void);
void line(void);
void info(void);

int main(void) {
	title();
	line();
	info();
	return 0;
}

void title(void) { 
	printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name: \n");
	printf("\tLuwam Goitom-Worre\n");
	printf("Email: \n");
	printf("\tlgoitom-worre@myseneca.ca");
}