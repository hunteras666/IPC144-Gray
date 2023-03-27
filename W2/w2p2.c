/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
   
    // Declaring variables
    double smallShirtPrice, mediumShirtPrice, largeShirtPrice;
    int numberOfShirtsPatty, numberOfShirtsTommy, numberOfShirtsSally, subTotalPatty, taxCalcPatty, totalPatty, taxCalcSally, subTotalSally, totalSally, subTotalTommy, taxCalcTommy, totalTommy;
    int finalSubtotal, finalTax, finalTotal;
    double grandSubAverage = 0,grandTotalAverage = 0, subNumberOfShirtsPatty = 0, subNumberOfShirtsSally = 0, subNumberOfShirtsTommy = 0;
    

    // Displaying the output
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

    // Patty's information
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfShirtsPatty);
    printf("\n");

    subTotalPatty = smallShirtPrice * 100 * numberOfShirtsPatty;
    taxCalcPatty = subTotalPatty * TAX + 0.5;
    totalPatty = subTotalPatty + taxCalcPatty;

    // Tommy's Information
    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &numberOfShirtsTommy);
    printf("\n");

    subTotalTommy = largeShirtPrice * 100 * numberOfShirtsTommy;
    taxCalcTommy = subTotalTommy * TAX + 0.5;
    totalTommy = subTotalTommy + taxCalcTommy;

    // Sally's information
    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &numberOfShirtsSally);
    printf("\n");

    subTotalSally = mediumShirtPrice * 100 * numberOfShirtsSally;
    taxCalcSally = subTotalSally * TAX + 0.5;
    totalSally = subTotalSally + taxCalcSally;

    // Sales table
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallShirtPrice, numberOfShirtsPatty, (subTotalPatty + 0.0) / 100, (taxCalcPatty + 0.0) / 100, (totalPatty + 0.0) / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumShirtPrice, numberOfShirtsSally,(subTotalSally + 0.0) / 100, (taxCalcSally + 0.0) / 100, (totalSally + 0.0) / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeShirtPrice, numberOfShirtsTommy, (subTotalTommy + 0.0) / 100, (taxCalcTommy + 0.0) / 100, (totalTommy + 0.0) / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    // Calculating the final values
    finalSubtotal = subTotalPatty +  subTotalSally + subTotalTommy;
    finalTax = taxCalcPatty + taxCalcSally + taxCalcTommy;
    finalTotal = totalPatty + totalSally + totalTommy;

    printf("                         %8.4lf  %8.4lf  %8.4lf\n", finalSubtotal / 100.0, finalTax / 100.0, finalTotal / 100.0);
    printf("\n");

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalSubtotal/100.0);
    printf("Toonies  %3d %9.4lf\n", finalSubtotal / 200, (finalSubtotal % 200) / 100.0);
    finalSubtotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalSubtotal / 100, (finalSubtotal % 100) / 100.0);
    finalSubtotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalSubtotal / 25, (finalSubtotal % 25) / 100.0);
    finalSubtotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalSubtotal / 10, (finalSubtotal % 10) / 100.0);
    finalSubtotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalSubtotal / 5, (finalSubtotal % 5) / 100.0);
    finalSubtotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalSubtotal / 1, (finalSubtotal % 1) / 100.0);
    finalSubtotal %= 1;

    grandSubAverage = (subTotalPatty + subTotalSally + subTotalTommy) / 100.0;
    subNumberOfShirtsPatty = numberOfShirtsPatty;
    subNumberOfShirtsSally = numberOfShirtsSally;
    subNumberOfShirtsTommy = numberOfShirtsTommy;

    printf("Average cost/shirt: $%.4lf\n\n", grandSubAverage / (subNumberOfShirtsPatty + subNumberOfShirtsSally + subNumberOfShirtsTommy));



    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalTotal / 100.0);
    printf("Toonies  %3d %9.4lf\n", finalTotal / 200, (finalTotal % 200) / 100.0);
    finalTotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalTotal / 100, (finalTotal % 100) / 100.0);
    finalTotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalTotal / 25, (finalTotal % 25) / 100.0);
    finalTotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalTotal / 10, (finalTotal % 10) / 100.0);
    finalTotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalTotal / 5, (finalTotal % 5) / 100.0);
    finalTotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalTotal / 1, (finalTotal % 1) / 100.0);
    finalTotal %= 1;

    grandTotalAverage = (totalPatty + totalSally + totalTommy) / 100.0;
    printf("Average cost/shirt: $%2.4f", grandTotalAverage / (subNumberOfShirtsPatty + subNumberOfShirtsSally + subNumberOfShirtsTommy));
    printf("\n");
    return 0;
}