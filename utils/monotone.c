#include <stdio.h>

/*
read an arbitrary sequence of integers that ends when you enter a negative value; 
print any monotone subsequence on a different row. For example, if the input sequence is
1 0 2 4 34 8 9 10 -1
then the output is
1
0 2 4 34
8 9 10
*/

void monotone_1(){
    int x, previous=-1;
    scanf("%d", &x);
    while (x>=0){
        if (x < previous){
            printf("\n");
        }
        printf("%d ", x);
        previous = x;
        scanf("%d", &x);
    }
}

void monotone(void) {
    int x, previous=-1;

    while (scanf("%d", &x) == 1 && x >= 0) {
        if (x < previous) {
            printf("\n");
        }
        printf("%d ", x);
        previous = x;
    }
}


void input_seq(){
    int x;
    scanf("%d", &x);
    while (x>=0){
        printf("%d ", x);
        scanf("%d", &x);
    }
}