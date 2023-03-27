#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double width, length, area;

    printf("Give me the Width of the rectangle: ");
    scanf("%lf", &width);
    printf("\n");

    printf("Give me the Length of the rectangle: ");
    scanf("%lf", &length);
    printf("\n");

    area = length * width;
    printf("This is the area I have calculated: %.2lf\n", area);

    return 0;
}