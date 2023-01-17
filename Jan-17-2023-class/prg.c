// recieves or returns = functions talking between themselves
#include <stdio.h> //bring the standard input/output file = printf

void hello(void); // introduces "hello" function to c
void greetings(void); //function intrduction or in C: function prototype
void line(void);

// in order: char, short, int, long (long long)
// in order: float, double, long 

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

	printf("integer num is: %d, and float is: %f\n", num, fnum); // d = integer, f = decimal integer?
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
- backslash = special character
- % = placeholder for number
- whats happening to the right side flows into the left side (of = sign), left value must be settable
- floating point numbers are not precise
*/ 

// for next class: READ week 2 notes