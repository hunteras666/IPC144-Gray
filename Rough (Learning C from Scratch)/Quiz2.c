#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main (void)
{
    const int student1 = 405, student2 = 303;
    const double student1Income = 250.75, student2Income = 750.50;
    double result;
    int result2;

    printf("1. Student1 vs Student2: %d\n", student1 > student2);
    printf("2. Student1 vs Student2: %d\n", student1 < student2);
    printf("3. Student1 vs Student2: %d\n", student1 == student2);
    printf("4. Studetn1 test: %d\n", student1 % 5);
    printf("5. Student2 test: %d\n", student2 % 5);

    result = student1Income * (student2 - 103) / 20;
    printf("6. Studetn1 income: % 2lf\n", result);

    result = student2Income * ((student1 / 100.0) + 5.95);
    printf("7. Student2 income: %.2lf\n, result");

    result2 = (int)result;
    printf("8. Student2 income: %.2lf\n", (double)result2);

    printf("9. Income: %.2lf\n", (double)((int)(student1Income + student2Income)));
    printf("10. Income: %.2lf\n", (int)((int)student1Income + student2Income));

    return 0;
}