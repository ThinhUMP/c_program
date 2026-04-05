#include <stdio.h>
/*
Write a program that calculates the grid of powers "x to the y" such that x and y are values in the range [1,n] ,
where n is a positive integer specified by the user.
For example, if n is 4 then the output is:
1 1 1 1
2 4 8 16
3 9 27 81
4 16 64 256
*/

unsigned power_u(unsigned b, unsigned n){
    unsigned power=1;
    for (int i = 1; i<=n; i++){
        power *= b;
    }
    return power;
}

void grid(void){
    printf("n: ");
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1; j<=n; j++){
            printf("%u ", power_u(i, j));
        }
        printf("\n");
    }
}