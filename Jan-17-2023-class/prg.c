// recieves or returns = functions talking between themselves
#define _CRT_SECURE_NO_WARNINGS //no warning on stdio functions
#include <stdio.h> //bring the standard input/output file

void hello(void); // introduces "hello" function to c
void greetings(void); //function intrduction or in C: function prototype
void line(void);

// in order of least to greatest: char, short, int, long (long long)
// in order of least to greatest: float, double, long 

int main(void) {
	// main is where the function begins, is mandatory
	// void = nothing

	int num;
	int value = 10;
	float fnum;
	num = 25;
	fnum = 25.123;
	num = value + 32; // the 25 is overwritten and replaced by the action on the right
	hello();

	printf("integer num is: %d, and float is: %f\n", num, fnum); // d = integer, f = decimal floating point
	greetings();
	return 0;
	// return = returns the integer
	// 0 = returns the program back to operating system, program is finished
}
// for int, you need to have a return function

void hello(void) {
	printf("\thello IPC144NBB\n");
	line();
	putchar('\n');
}

void greetings(void) {
	printf("\tgreetings!\n");
	line();
	putchar('n');
}

void line(void) {
	printf("-------------------------------------\n");
}



// \t = go to next tab position
// \n = go to next line

/*
- variables = containers that hold numbers
- int = normal sized integer
- num or age for example holds numbers
- backslash is used for special characters
- % = placeholder for number
- whats happening to the right side flows into the left side (of = sign), left value must be settable
- floating point numbers are not precise
- %d = integer (whole number)
- %lf = double float
- %c = single characters
- %f = float
- & = address of

*/ 

// for next class: READ week 2 notes