#include <stdio.h>

/*
Write a program that reads and arbitrary sequence of integers and calculates 
the length of the largest subsequence of increasing values.
For example, if the input sequence is
-1 -2 3 4 7 0 1 2
then the output is: 4
*/

void increase(void){
    int x, previous, first=1, count=0, max_count = 0;

    while (scanf("%d", &x) == 1) {
        if (first){
            previous = x;
            first = 0;
        } 
        else if (x < previous) {
            printf("\n");
            if (count > max_count){
                max_count = count;
            }
            count = 0;
        }
        printf("%d ", x);
        previous = x;
        count+=1;
    }

    printf("\n");
    printf("Max monotone length: %d", max_count);
}