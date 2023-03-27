/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Rajesh Sah
Student ID#: 175281211
Email      : rsah@myseneca.ca
Section    : ZRA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    // Product ID
    const int product1_ID = 111;
    const int product2_ID = 222; 
    const int product3_ID = 111; 

    // Price
    const double product1_price = 111.49;
    const double product2_price = 222.99;
    const double product3_price = 334.49;

    // Taxed or not
    const char product1_tax = 'Y';
    const char product2_tax = 'N';
    const char product3_tax = 'N';

    // Average price of all 3 products
    double averagePrice = (product1_price + product2_price + product3_price) / 3;

    printf("Product Information\n");
    printf("===================\n");

    // Product 1
    printf("Product-1 (ID:%d)\n", product1_ID);
    printf("  Taxed: %c\n", product1_tax);
    printf("  Price: $%.4lf\n", product1_price);
    printf("\n");

    // Product 2
    printf("Product-2 (ID:%d)\n", product2_ID);
    printf("  Taxed: %c\n", product2_tax);
    printf("  Price: $%.4lf\n", product2_price);
    printf("\n");

    // Product 3
    printf("Product-3 (ID:%d)\n", product3_ID);
    printf("  Taxed: %c\n", product3_tax);
    printf("  Price: $%.4lf\n", product3_price);
    printf("\n");

    // Average of all prices
    printf("The average of all prices is: $%.4lf\n", averagePrice);
    printf("\n");

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");
    printf("\n");

    // Data Analysis
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", product1_tax == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", product2_tax && product3_tax != 'Y');
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, product3_price < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", product3_price > product1_price + product2_price);
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", product1_price >= product3_price - product2_price, product3_price - product2_price);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", product2_price >= averagePrice);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (product2_ID != product1_ID) && (product3_ID != product1_ID));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (product1_ID != product2_ID) && (product3_ID != product2_ID));
    printf("9. Based on product ID, product 3 is unique -> %d\n", (product1_ID != product3_ID) && (product2_ID != product3_ID));
    
    return 0;
}