#include<stdio.h>

int array(void){
    char name[7]="Hello";
    for (int i=0; i<10; i++){
        printf("%c ", name[i]);
    }
    return 0;
}

//Print an array with n elements
void printElement(int a[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
}

//Compute the average of elements
double avgArr(int a[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum+=a[size];
    }
    return (sum/size);
}

//Reverse an array
//See pointer file

//Find the minimum value
int minArr(int a[], int size){
    int min = a[0];
    for (int i=1; i<size; i++){
        if (a[size]<min){
            min = a[size];
        }
    }
    return min;
}

//Work with a 2D matrix (sum all elements)
void printArr2D(int row, int col, int a[row][col]){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
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