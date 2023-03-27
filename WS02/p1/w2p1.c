/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Rajesh Sah
Student ID#: 175281211
Email      : rsah@myseneca.ca
Section    : ZRA

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    //Declaring variables
    double small ShirtPrice, mediumShirtPrice, largeShirtPrice;
    int numberOfShirts, total, subTotal, taxCalc;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirtPrice);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", smallShirtPrice);
    printf("MEDIUM : $%.2lf\n", mediumShirtPrice);
    printf("LARGE  : $%.2lf\n\n", largeShirtPrice);
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfShirts);
    printf("\n");

    subTotal = smallShirtPrice * 100 * numberOfShirts;
    taxCalc = subTotal * TAX + 0.5;
    total = subTotal + taxCalc;
    
    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", numberOfShirts);
    printf("Sub-total: $%8.4lf\n",  ((double) subTotal) / 100);
    printf("Taxes    : $%8.4lf\n",  ((double) taxCalc) / 100);
    printf("Total    : $%8.4lf\n",  ((double) total) / 100);

    return 0;
}