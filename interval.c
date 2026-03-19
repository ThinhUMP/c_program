#include <stdio.h>

int main(){
    printf("First interval:\n");
    int begin1, end1;
    scanf("%d %d", &begin1, &end1);
    printf("Second interval:\n");
    int begin2, end2;
    scanf("%d %d", &begin2, &end2);

    if (end1<begin2 || end2<begin1){
        printf("Disjoint");
    }
    else if (end1==begin2 || end2==begin1){
        printf("Disjoint");
    }
    else {
        printf("Joint");
    }
    return 0;
}