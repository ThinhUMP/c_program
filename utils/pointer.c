#include<stdio.h>

// define a function that swaps two variables
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//write a function that takes an array of int and
//puts in in reverse order

void reverse(int arr[], int size){  
    for (int i=0; i<size/2; i++){
        swap(&arr[i], &arr[size-1-i]);
    }
}

//translate this function using pointer