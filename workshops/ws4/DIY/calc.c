#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "calc.h"
#include "utils.h"

int calc(void) {
	char question;
/*

?num@num


*/
	question = symbol();
	if(question != '\n') {
		if(question != '?') {
			// questio is not newline but also it is not '?' and there it is an error
			// display error message
		} else {
			operations();
		}
	}
	return /* a condition that is true if question is not newline*/;
}


char symbol() {
	char question;
	printf("> ");
	question = getSingleChar();
	return question;
}

void operations() {
	double firstNum = 0;
	double secondNum = 0;
	double total;
	char oper;
	scanf("%lf%c%lf", &firstNum, &oper, &secondNum);
	flushKey();
	switch (oper) {
	case '+':
		total = firstNum + secondNum;
		printf("%.2lf", total);
		break;
	case '-':
		total = firstNum - secondNum;
		printf("%.2lf", total);
		break;
	case 'x':
		total = firstNum * secondNum;
		printf("%.2lf", total);
		break;
	case '/':
		total = firstNum / secondNum;
		printf("%.2lf", total);
		break;
	case '%':
			
		printf("%d", (int)firstNum % (int)secondNum);
		break;
	case '^':
		// a ^b 
		// 3 ^ 4
		// 3 * 3 * 3 * 3
		// 2.2 ^ 3.2
		// 2.2 * 2.2 * 2.2
/*
   a ^ b
	res  = 1 
	loop (b times )
	   res = res * a;
   end loop
	your answer will be in res
*/

	//	total = firstNum ^ secondNum;
		printf("%.2lf", total);
		break;
	default:
		printf("%c is not a valid operation, (only +, -, /, x, modulus, and ^ are acceptable)\n", oper);

	}
}


/*printf("> abc\n");
printf("Invalid Command!\n");
printf("[Question Mark][First Number][Operation][Second Number]<ENTER>\n");*/
/*scanf("%c", &question);
*/
