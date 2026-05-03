#include <stdio.h>

int main(){
    int n;
    char ch;

    scanf("%d", &n);
    scanf(" %c\n", &ch);
    while (ch!='c'){
        scanf(" %c\n", &ch);
    }
    return 0;
}
