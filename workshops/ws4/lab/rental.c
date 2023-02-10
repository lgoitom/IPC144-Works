#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "rental.h"

void menu(void) {
    printf("Equipment     Price     SKU\n");
    printf("----------------------------\n");
    printf("Skis          12.30     101\n");
    printf("Boots         10.45     102\n");
    printf("Poles         2.99      203\n");
    printf("Helmet        3.99      204\n");
    printf("Winter Pants  14.30     305\n");
    printf("Winter Jacket 20.55     306\n");
    printf("----------------------------\n");
}
double rent(int sku) {
    double price = 0.0;

    switch (sku) {
    case 101:
        price = 12.30;
        printf("Skis ............. %.2lf$\n", price);
        break;
    case 102:
        price = 10.45;
        printf("Boots ............ %.2lf$\n", price);
        break;
    case 203:
        price = 2.99;
        printf("Poles ....... %.2lf$\n", price);
        break;
    case 204:
        price = 3.99;
        printf("Helmet .... %.2lf$\n", price);
        break;
    case 305:
        price = 14.30;
        printf("Winter Pants ..... %.2lf$\n", price);
        break;
    case 306:
        price = 20.55;
        printf("Winter Jacket .... %.2lf$\n", price);
        break;
    default:
        printf("Invalid Selection!\n");
    }
    return price;

}
void rental(void) {
    int skuNum = 0;
    double price = 0.0;
    double tax;
    double totalPrice;
    menu();
    do {
        printf("Enter Sku or 0 to exit: ");
        skuNum = getInt();

        if (skuNum != 0) {
            price += rent(skuNum);
        }
        
    } while (skuNum != 0);

    printf("----------------------------\n");
    printf("Total price:       %.2lf\n", price);
    tax = price * 0.13;
    printf("Tax:                %.2lf\n", tax);
    totalPrice = tax + price;
    printf("Total + Tax:       %.2lf$\n", totalPrice);
    printf("****************************\n");
    
}
