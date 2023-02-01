#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length) {
	int i;

	for (i = 0; i < length; i++) {
		putchar(fill);
	}
	putchar('\n'); 
}


void shoppingStats(int numOfItems) {

	int rowNumber;
	double itemPrice;
	double sumItems = 0;
	double avg;

	printf("Please enter the price of the %d items bought...\n", numOfItems);


	for (rowNumber = 0; rowNumber < numOfItems; rowNumber++) {
		printf("%d> ", rowNumber + 1);
		scanf("%lf", &itemPrice);
		sumItems += itemPrice;

	}
	avg = sumItems / numOfItems;
	line('-', 50);
	printf("Total price for all the items purchased: %.2lf", sumItems);
	printf("\nAverage price of the items: %.2lf\n", avg);
	line('=', 50);
}