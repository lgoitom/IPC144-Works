#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "calc.h"
#include "utils.h"

double calc(void) {
	char question;
	char oper;
	double firstNum = 0;
	double secondNum = 0;

	printf("> abc\n");
	printf("Invalid Command!\n");
	printf("[Question Mark][First Number][Operation][Second Number]<ENTER>\n");
	scanf("%c", &question);
	scanf("%.2lf %c %.2lf", &firstNum, &oper, &secondNum);
	question = symbol();
	if (question != 0) {
		oper = operations();
	}
	return 0;
}

char symbol(char question) {
	char question;
	question = getSingleChar();
}

double operations(char oper) {
	double firstNum = 0;
	double secondNum = 0;
	double total;

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
		/*case '%':
			total = firstNum % secondNum;
			printf("%.2lf", total);
			break;
		case '^':
			total = firstNum ^ secondNum;
			printf("%.2lf", total);
			break;*/
	default:
		printf("%c is not a valid operation, (only +, -, /, x, modulus, and ^ are acceptable)\n", oper);

	}
	return 0;
}