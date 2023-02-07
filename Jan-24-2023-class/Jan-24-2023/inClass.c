#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void cal_sum(void);
void line(int length);
void calcs(int times);



int main(void) {

	int noOfTimes;
	printf("how many times calculations need to be done?\n> ");
	scanf("%d", &noOfTimes);
	calcs(noOfTimes);

	return 0;

}
void calcs(int times) {
	int i = 0;
	while (i < times) {
		printf("%d: ", i + 1);
		cal_sum();
		i++;
	}
 }

void cal_sum(void) {
	int num1;
	int num2;
	int sum;
	printf("Enter two numbers:\n1> ");
	scanf("%d", &num1);
	printf("2> ");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("the sum is: %d\n", sum);
	
}

void line(int len) {
	int i;
	for (i = 0; i < len; i++) {
		putchar('-'); //more than one character put "", just one character put '
	}
	putchar('\n');
}