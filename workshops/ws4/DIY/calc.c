#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "calc.h"
#include "utils.h"


int calc(void) {
    int done = 0;
    char ch;

    while (!done) {
        printf("> ");
        scanf("%c", &ch);
        if (ch == '\n') {
            done = 1;
        }
        else if (ch != '?') {
            flushKey();
            printf("Invalid Command!\n[Question Mark][First Number][Operation][Second Number]<ENTER>\n");

        }
        else {
            operations();
        }
    }
    return 0;
}

void operations(void) {
    double firstNum, secondNum, total;
    double res = 1.000;
    char oper;
    int length = 0;
    scanf("%lf%c%lf", &firstNum, &oper, &secondNum);
    flushKey();
    switch (oper) {
    case '+':
        total = firstNum + secondNum;
        length = printf("%.3lf\n", total);
        line('-', length - 1);
        break;
    case '-':
        total = firstNum - secondNum;
        length = printf("%.3lf\n", total);
        line('-', length - 1);
        break;
    case 'x':
        total = firstNum * secondNum;
        length = printf("%.3lf\n", total);
        line('-', length - 1);
        break;
    case '/':
        total = firstNum / secondNum;
        length = printf("%.3lf\n", total);
        line('-', length - 1);
        break;
    case '%':
        length = printf("%ld\n", (long)firstNum % (long)secondNum);
        line('-', length - 1);
        break;
    case '^':
        res = firstNum;
        while (secondNum > 1) {
            res *= firstNum;
            secondNum--;
        }
        length = printf("%.3lf\n", res);
        line('-', length - 1);
        break;
    default:
        printf("%c is not a valid operation (only +, -, /, x, %%, and ^ are acceptable)\n", oper);
    }
}
