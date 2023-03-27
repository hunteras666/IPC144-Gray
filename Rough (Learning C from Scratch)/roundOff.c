#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;
    double d;

    d = 69.69;
    printf("After round off d = %.0lf\n", d);
    
    c = d + 0.5; // trick to round off by adding 0.5 to any fraction number
    printf("After round off c = %d\n", c);


    return 0;

}