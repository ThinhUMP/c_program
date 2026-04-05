#include <stdio.h>

/*
Write a program that draws a "triangle" of size n, where n is a positive integer specified by the user.
For example, if n is 3 then the output is:
*/

void triangle(void){
    printf("n size: ");
    unsigned n;
    scanf("%u", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}