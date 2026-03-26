// convert an integer to its binary form
#include <stdio.h>

int main(){
    unsigned x;
    scanf("%u", &x);
    do {
    printf("%u ", x % 2);
    x = x / 2;
    // printf("%u ", x);
    } while (x);
}
