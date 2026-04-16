#include<stdio.h>

int array(void){
    char name[7]="Hello";
    for (int i=0; i<10; i++){
        printf("%c ", name[i]);
    }
    return 0;
}