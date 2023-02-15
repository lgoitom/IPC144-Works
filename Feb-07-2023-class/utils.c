/*
write a fool proof integer entry

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
/*int main(void) {
    int num;
    printf("Enter an ineger: ");
    num = getInt();
    printf("you entered: %d\n", num);
    return 0;
}*/

int getInt() {
    int value;
    int done = 0;
    while (!done) {
        if (scanf("%d", &value) == 1) {
            done = 1;
        }
        else { // user enterd non integer
            flushKey();
            printf("Invalid Integer, try again: ");
        }
    }
    return value;
}

void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}

int yes(void) {
    int res;
    char rep;
    printf("(Y)es or (N)o");
    rep = getchar();
    if (rep == 'Y' || rep == 'y') {
        res = 1;
    }
    else {
        res = 0;
    }
    return res;
}