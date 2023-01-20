#include <stdio.h>

void title(void); //this is the prototype
void line(void);
void info(void);

int main(void) {
	title();
	line();
	info();
}

void title(void) { // this is the function
	printf("IPC144 NBB\t Workshop 1\t Part 1\n");
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