// convert an integer to its binary form
#include <stdio.h>

int convert_binary(void){
    unsigned x;
    scanf("%u", &x);
    do {
    printf("%u ", x % 2);
    x = x / 2;
    } while (x);
    return 0;
}
