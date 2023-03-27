#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double PI = 3.14159265359;
    double radius, area;

    printf("Enter the radius if you want otherwise who cares: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    printf("The area will appear here: %.3lf",area);

    return 0;
}