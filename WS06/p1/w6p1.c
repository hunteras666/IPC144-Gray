/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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

#define MAX_ITEMS 10 // Macro for Max Items

int main(void)
{
    // Declaring variables
    double monthlyNetIncome;
    int wishListItems;
    
    //  Unmodifiable variables for Min and Max value to be stored
    const double minIncome = 500.00;
    const double maxIncome = 400000.00;
    const double minCost = 100.00;
    
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    // Prompting the user for their NET monthly income
    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthlyNetIncome);

        if (monthlyNetIncome < minIncome) 
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }

        if (monthlyNetIncome > maxIncome)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }

        printf("\n");
    }
    while(!(monthlyNetIncome >= minIncome && monthlyNetIncome <= maxIncome));

    // Prompting the user to specify the number of wish list items they want to use in the forecast
    do {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishListItems);

        if (!(wishListItems > 0 && wishListItems <= MAX_ITEMS)) 
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        printf("\n");
    }
    while(!(wishListItems > 0 && wishListItems <= MAX_ITEMS));

    // Declaring Arrays
    double cost[wishListItems];
    int priority[wishListItems];
    char financeOptions[wishListItems];

    // Using a for loop to display individual item details
    int i;
    for (i = 1; i <= wishListItems; i++)
    {
        printf("Item-%d Details:\n", i);

        // Cost
        do {
            printf("   Item cost: $");
            scanf("%lf", &cost[i - 1]);

            if (cost[i - 1] < minCost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            } 
        }
        while (cost[i - 1] < minCost);

        // Priority
        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i - 1]);

            if ((priority[i - 1] < 1) || (priority[i - 1] > 3))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            } 
        }
        while ((priority[i - 1] < 1) || (priority[i - 1] > 3));

        // Financing options
        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &financeOptions[i - 1]);

            if (!(financeOptions[i - 1] == 'n' || financeOptions[i - 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            } 
        }
        while (!(financeOptions[i - 1] == 'n' || financeOptions[i - 1] == 'y'));

        printf("\n");
    }

    // Summary table
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    
    // Using iteration to display all the details
    int j;
    double totalCost = 0;
    for(j = 1; j <= wishListItems; j++)
    {
        printf("  %d      %d        %c     %10.2lf\n", j, priority[j - 1], financeOptions[j - 1], cost[j - 1]);
        totalCost += cost[j - 1];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $ %.2lf\n", totalCost);
    printf("\n");

    // Ending message
    printf("Best of luck in all your future endeavours!\n");

    return 0;
}