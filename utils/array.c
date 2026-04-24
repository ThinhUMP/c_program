#include<stdio.h>

int array(void){
    char name[7]="Hello";
    for (int i=0; i<10; i++){
        printf("%c ", name[i]);
    }
    return 0;
}

/*
grades [18, 30] input, find mode

int grades[max] = {0}; int grade
while (scanf("%d", &grade) == 1 and 18<=grade=<30)
grades[grade-18]++;
*/

/*
sort values in ascending order or descending order from scratch
2 solutions:
- compare => swap
- mergesort
+ mergesort: recursive
+ merge: not recursive
*/

/*
given a sorted array, 
if the index of value, we can do like the guessing number in python, find the middle => compare,
then find the middle again
*/