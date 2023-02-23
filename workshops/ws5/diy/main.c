/***********************************************************************
// IPC Workshop 5 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
//  Implement the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
#include "utils.h"


int main(void) {
	int i;
	printf("Subject performance report\n");
	printf("--------------------------\n");
	do {
		subjectMarksReport();
		printf(" Exit? ");
	} while (!yes());


	return 0;
}