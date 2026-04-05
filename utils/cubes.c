#include <stdio.h>
/*
Write a program that calculates the "cubes" less than or equal to n, 
where n is a positive integer specified by the user.
For example, if n is 100 then the output is:
1 8 27 64
*/

int cubes(){
    printf("Calculates the cubes less than or equal to n\n");
    printf("n: ");
    unsigned n;
    scanf("%u", &n);
    unsigned i=1;
    while (i*i*i <= n){
        printf("%u ", i*i*i);
        i++;
    }
    return 0;
}