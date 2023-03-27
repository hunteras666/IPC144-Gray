/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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
    // Variables Declration
    char operation_type;
    int loop_count;
    int i; 
    
    // Title of the application
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");
    
    // Running a loop which keeps on running until the user presses 'Q' to quit
    do {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &operation_type, &loop_count);

        switch (operation_type) 
        {
            case 'D': 
                if (loop_count < 3 || loop_count > 20) 
                    printf("ERROR: The number of iterations must be between 3-20 inclusive!");
                else 
                {
                   // Executing a do-while loop
                    printf("DO-WHILE: ");
                    i = 0;
                    do
                    {
                        printf("D");
                        i++;
                    } while (i < loop_count);
                }
                printf("\n\n");
                break;
        
            case 'W':
                if (loop_count < 3 || loop_count > 20)
                    printf("ERROR: The number of iterations must be between 3-20 inclusive!");
                else
                {
                    // Executing a while loop
                    printf("WHILE   : ");
                    i = 0;
                    while (i < loop_count)
                    {
                        printf("W");
                        i++;
                    }
                }
                printf("\n\n");
                break;

            case 'F': 
                if (loop_count < 3 || loop_count > 20)
                    printf("ERROR: The number of iterations must be between 3-20 inclusive!");
                else
                {
                    printf("FOR     : ");
                    for (i = 0; i < loop_count; i++)
                    {
                        printf("F");
                    }
                }
                printf("\n\n");
                break;

            case 'Q': 
                if (loop_count != 0)
                    printf("ERROR: To quit, the number of iterations should be 0!\n\n");
                else
                    printf("\n");
                break;

            default: printf("ERROR: Invalid entered value(s)!");
            printf("\n\n");
        }

    } while (operation_type != 'Q' || loop_count != 0);

    // Output
    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    printf("\n");

    return 0;
}