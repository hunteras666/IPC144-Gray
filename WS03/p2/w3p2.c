/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    // Declaring variables
    // Variables used to represent the product data records
    char CFE1_type, CFE2_type, CFE3_type;
    int CFE1_bag_weight, CFE2_bag_weight, CFE3_bag_weight;
    char CFE1_cream_or_not, CFE2_cream_or_not, CFE3_cream_or_not;

    // Variables used to store the user-input values for user preferences
    char coffee_strength, coffee_with_cream;
    int daily_servings;

    // Displaying the output
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    // Asking input for the product data records
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &CFE1_type);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE1_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE1_cream_or_not);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &CFE2_type);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE2_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE2_cream_or_not);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &CFE3_type);
    printf("Bag weight (g): ");
    scanf(" %d", &CFE3_bag_weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CFE3_cream_or_not);
    printf("\n");

    // Table to represent the product data records
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (CFE1_type == 'L' || CFE1_type == 'l'), (CFE1_type == 'M' || CFE1_type  == 'm'), (CFE1_type == 'R' || CFE1_type == 'r'), CFE1_bag_weight, CFE1_bag_weight / GRAMS_IN_LBS, (CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y'));

    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (CFE2_type == 'L' || CFE2_type == 'l'), (CFE2_type == 'M' || CFE2_type == 'm'), (CFE2_type == 'R' || CFE2_type == 'r'), CFE2_bag_weight, CFE2_bag_weight / GRAMS_IN_LBS, (CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y'));
    
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (CFE3_type == 'L' || CFE3_type == 'l'), (CFE3_type == 'M' || CFE3_type == 'm'), (CFE3_type == 'R' || CFE3_type == 'r'), CFE3_bag_weight, CFE3_bag_weight / GRAMS_IN_LBS, (CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y'));
    printf("\n");

  // Asking the user for preferences
    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &daily_servings);
    printf("\n");

    // First table for user preferences
    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");    

    printf(" 1|       %d         |      %d      |   %d   |\n", ((CFE1_type == 'L' || CFE1_type == 'l') || (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE1_type == 'R' || CFE1_type == 'r') || (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE1_bag_weight >= 0 && CFE1_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE1_bag_weight > 250 && CFE1_bag_weight <= 500)) || (daily_servings >= 10 && (CFE1_bag_weight > 500 && CFE1_bag_weight <= 1000)), ((CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE1_cream_or_not == 'N' || CFE1_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf(" 2|       %d         |      %d      |   %d   |\n", ((CFE2_type == 'L' || CFE2_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE2_type == 'R' || CFE2_type == 'r') && (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE2_bag_weight >= 0 && CFE2_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE2_bag_weight > 250 && CFE2_bag_weight <= 500)) || (daily_servings >= 10 && (CFE2_bag_weight > 500 && CFE2_bag_weight <= 1000)), ((CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE2_cream_or_not == 'N' || CFE2_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf(" 3|       %d         |      %d      |   %d   |\n", ((CFE3_type == 'L' || CFE3_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE3_type == 'R' || CFE3_type == 'r') && (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE3_bag_weight >= 0 && CFE3_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE3_bag_weight > 250 && CFE3_bag_weight <= 500)) || (daily_servings >= 10 && (CFE3_bag_weight > 500 && CFE3_bag_weight <= 1000)), ((CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE3_cream_or_not == 'N' || CFE3_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf("\n");

    // Promptthe user for preferences
    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffee_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee_with_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &daily_servings);
    printf("\n");

    // Second table for user preferences
    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    
    printf(" 1|       %d         |      %d      |   %d   |\n", ((CFE1_type == 'L' || CFE1_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) && ((CFE1_type == 'R' || CFE1_type == 'r') && (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE1_bag_weight >= 0 && CFE1_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE1_bag_weight > 250 && CFE1_bag_weight <= 500)) || (daily_servings >= 10 && (CFE1_bag_weight > 500 && CFE1_bag_weight <= 1000)), ((CFE1_cream_or_not == 'Y' || CFE1_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE1_cream_or_not == 'N' || CFE1_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf(" 2|       %d         |      %d      |   %d   |\n", ((CFE2_type == 'L' || CFE2_type == 'l') && (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE2_type == 'R' || CFE2_type == 'r') && (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE2_bag_weight >= 0 && CFE2_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE2_bag_weight > 250 && CFE2_bag_weight <= 500)) || (daily_servings >= 10 && (CFE2_bag_weight > 500 && CFE2_bag_weight <= 1000)), ((CFE2_cream_or_not == 'Y' || CFE2_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE2_cream_or_not == 'N' || CFE2_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf(" 3|       %d         |      %d      |   %d   |\n", ((CFE3_type == 'L' || CFE3_type == 'l') || (coffee_strength == 'M' || coffee_strength == 'm')) || ((CFE3_type == 'R' || CFE3_type == 'r') || (coffee_strength == 'R' || coffee_strength == 'r')), ((daily_servings >= 1 && daily_servings <= 4) && (CFE3_bag_weight >= 0 && CFE3_bag_weight <= 250)) || ((daily_servings > 4 && daily_servings <= 9) && (CFE3_bag_weight > 250 && CFE3_bag_weight <= 500)) || (daily_servings >= 10 && (CFE3_bag_weight > 500 && CFE3_bag_weight <= 1000)), ((CFE3_cream_or_not == 'Y' || CFE3_cream_or_not == 'y') && (coffee_with_cream == 'Y' || coffee_with_cream == 'y')) || ((CFE3_cream_or_not == 'N' || CFE3_cream_or_not == 'n') && (coffee_with_cream == 'N' || coffee_with_cream == 'n')));

    printf("\n");
    printf("Hope you found a product that suits your likes!\n");

    return 0;
}