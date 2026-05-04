#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};

    printf("%p\n", &arr[0]);
    printf("%p\n", (arr + 0));

    printf("%p\n", &arr[2]);
    printf("%p\n", (arr + 2));

    return 0;
}