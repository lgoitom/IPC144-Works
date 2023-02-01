#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length);
void shoppingStats(int noOfItems);

int main(void) {

	int numOfItems;

	printf("Money Spending Calculator\n");
	line('=', 25);
	printf("How many items were bought?\n");
	printf("> ");
	scanf("%d", &numOfItems);
	shoppingStats(numOfItems);


	return 0;

}