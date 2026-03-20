#include<stdio.h>

void display(){
    printf("Display the first N natural numbers: ");
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        printf("%d ", i+1);
    }
}

int main(){
    display();
    return 0;
}