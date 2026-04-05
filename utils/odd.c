#include<stdio.h>
/*
    Calculate the sum of first N odd number. N is the value entered by the user
*/

void odd(void){
    printf("Input the number of first N odd numbers: ");
    int N;
    scanf("%d", &N);

    // Method 1
    int sum1 = 0;
    for (int i =1; i<=(2*N-1); i+=2){
        sum1 += i;
    }

    // Method 2
    int sum2 = 0;
    for (int i = 0; i < N; i++){
        sum2 += (i*2+1);
    }

    // Sum of odd numbers less than N
    int sum3 = 0;
    for (int i = 1; i < N; i+=2){
        sum3 += i;
    }

    printf("1. Sum of first %d odd numbers: %d\n", N, sum1);
    printf("2. Sum of first %d odd numbers: %d\n", N, sum2);
    printf("3. Sum of first odd numbers less than %d: %d\n", N, sum3);
}