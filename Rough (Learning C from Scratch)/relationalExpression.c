#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int raj, malli, jells;
    int adult, child, senior;
    int employed, workingAdult;

    raj = 666;

    jells = raj == 666; // 1 cus that's true 
    printf("raj == 666 is %d\n", jells);

    jells = raj > 666; // 0 cus that's false 
    printf("raj > 666 is %d\n", jells);

    jells = raj < 666; // 0 cus that's false 
    printf("raj < 666 is %d\n", jells);
    
    // PRECEDENCE
    
    // arithmaetic operators are +, -, *, /, %
    // other relational operators are <, >, ==, <=, >=, !=
    // logical operator are !, &&, ||

    child = 0;
    senior = 0;

    adult = !child && !senior;
    printf("If child = %d and senior = %d, then adult = %d\n", child, senior, adult);

    child = 1;
    adult = !child && !senior; //{ !child && !senior } and {!(child || senior)} same
    printf("If child = %d and senior = %d, then adult = %d\n", child, senior, adult);

    child = 0;
    adult = !(child || senior); // Demorgan's theorem
    printf("If child = %d and senior = %d, then adult = %d\n", child, senior, adult);

    employed = 1;
    workingAdult = !(child || senior) && employed;
    printf("If child = %d and senior = %d, employed = %d, then employedAdult = %d\n", child, senior, employed, adult);

// precedence is !, &&, ||
// precedence rela


    return 0;

}