#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "classList.h"
int main() {
	int stno[4] = { 12345, 23456, 345678, 45678 };
	int mark[4] = { 55,66,44,88 };
	printReport("IPC144NBB", stno, mark, 4);
	return 0;
}