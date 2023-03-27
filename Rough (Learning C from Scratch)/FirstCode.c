#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double PI = 3.14159265359;
    double radius, area;
    int practice = 0x12;

    printf("Enter the radius if you want otherwise who cares: ");
    scanf("%lf", &radius);
    printf("\n");

    area = PI * radius * radius;
    printf("The radius and area will appear here respectively: %.3lf & %.3lf\n", radius, area);
    printf("practice how to print hexadecimal conversion= %d\n", practice);

    return 0;
}