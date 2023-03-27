/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Rajesh Sah
Student ID#: 175281211
Email      : rsah@myseneca.ca
Section    : ZRA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
     //Declaring Variables
    int numberOfApples, numberOfOranges, numberOfPears, numberOfTomatoes, numberOfCabbages;
    int i;
    int continueShopping;

    do
    {
        // Displaying the shopping list
        printf("Grocery Shopping\n"
               "================\n");

        do
        {
            // Apples
            printf("How many APPLES do you need? : ");
            scanf("%d", &numberOfApples);
            if (numberOfApples < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (numberOfApples < 0); // This loop runs if the user enters a value less than 0 for the number of Apples
        printf("\n");
        
        do
        {
            // Oranges
            printf("How many ORANGES do you need? : ");
            scanf("%d", &numberOfOranges);
            if (numberOfOranges < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (numberOfOranges < 0); // This loop runs if the user enters a value less than 0 for the number of Oranegs
        printf("\n");
        do
        {
            // Pears
            printf("How many PEARS do you need? : ");
            scanf("%d", & numberOfPears);
            if ( numberOfPears < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while ( numberOfPears < 0); //This loop runs if the user enters a value less than 0 for the number of Pears
        printf("\n");
        do
        {
            // Tomatoes
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &numberOfTomatoes);
            if (numberOfTomatoes < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (numberOfTomatoes < 0); // This loop runs if the user enters a value less than 0 for the number of Tomatoes
        printf("\n");
        do
        {
            // Cabbages
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &numberOfCabbages);
            if (numberOfCabbages < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (numberOfCabbages < 0); //  This loop runs if the user enters a value less than 0 for the number of Cabbages
        
        // Picking the products
        printf("\n");
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
        printf("\n");
        
        // Apples
        if (numberOfApples)
        {
            do
            {
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &i);
                
                if (i < 1)
                    printf("ERROR: You must pick at least 1!\n");
                else
                { 
                    if (numberOfApples < i)
                        printf("You picked too many... only %d more APPLE(S) are needed.\n", numberOfApples);
                    else if (numberOfApples)
                    {
                        numberOfApples -= i;
                        if (numberOfApples)
                            printf("Looks like we still need some APPLES...\n");
                    }
                }
            } while (numberOfApples);
            printf("Great, that's the apples done!\n\n");
        }
        
        // Oranges
        if (numberOfOranges)
        {
            do
            {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &i);

                if (i < 1)
                    printf("ERROR: You must pick at least 1!\n");
                else
                {
                    if (numberOfOranges < i)
                        printf("You picked too many... only %d more ORANGE(S) are needed.\n", numberOfOranges);
                    else if (numberOfOranges)
                    {
                        numberOfOranges -= i;
                        if (numberOfOranges)
                            printf("Looks like we still need some ORANGES...\n");
                    }
                }
            } while (numberOfOranges);
            printf("Great, that's the oranges done!\n\n");
        }
        
        // Pears
        if ( numberOfPears)
        {
            do
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &i);

                if (i < 1)
                    printf("ERROR: You must pick at least 1!\n");
                else
                {
                    if ( numberOfPears < i)
                        printf("You picked too many... only %d more PEAR(S) are needed.\n", numberOfPears);
                    else if ( numberOfPears)
                    {
                         numberOfPears -= i;
                        if ( numberOfPears)
                            printf("Looks like we still need some PEARS...\n");
                    }
                }
            } while ( numberOfPears);
            printf("Great, that's the pears done!\n\n");
        }
        
        // Tomatoes
        if (numberOfTomatoes)
        {
            do
            {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &i);

                if (i < 1)
                    printf("ERROR: You must pick at least 1!\n");
                else
                {
                    if (numberOfTomatoes < i)
                        printf("You picked too many... only %d more TOMATO(ES) are needed.\n", numberOfTomatoes);
                    else if (numberOfTomatoes)
                    {
                        numberOfTomatoes -= i;
                        if (numberOfTomatoes)
                            printf("Looks like we still need some TOMATOES...\n");
                    }
                }
            } while (numberOfTomatoes);
            printf("Great, that's the tomatoes done!\n\n");
        }
        
        // Cabbages
        if (numberOfCabbages)
        {
            do
            {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &i);

                if (i < 1)
                    printf("ERROR: You must pick at least 1!\n");
                else
                {
                    if (numberOfCabbages < i)
                        printf("You picked too many... only %d more CABBAGE(S) are needed.\n", numberOfCabbages);
                    else if (numberOfCabbages)
                    {
                        numberOfCabbages -= i;
                        if (numberOfCabbages)
                            printf("Looks like we still need some CABBAGES...\n");
                    }
                }
            } while (numberOfCabbages);
            printf("Great, that's the cabbages done!\n\n");
        }
        printf("All the items are picked!\n\n");
        
        // Ask if the loop need to be run again
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &continueShopping);
        printf("\n");
    } while (continueShopping);
    
    // Ending message
    printf("Your tasks are done for today - enjoy your free time!\n");
    printf("\n");

    return 0;
}