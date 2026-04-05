#include<stdio.h>

/* 26 Mar 2026
Write a program that calculates b raised to the n, where b and n are a double and an integer, respectively, specified by the user.
*/

double power_ex(){
    double b, power=1.0;
    printf("base: ");
    scanf("%lf", &b);
    
    unsigned n;
    printf("exponent: ");
    scanf("%u", &n);
    for (int i = 1; i<=n; i++){
        power *= b;
    };
    printf("%f to %u is %f", b, n, power);
    printf("\n");
    return 0.0;
}












