#include "utils/import.h"
#define SOURCE 1
#define DEST 3
#define SPARE 2


int main() {
    // if (!isleap(1968))
    //     printf("error: 1968 is leap year\n");
    // if (daysPerMonth(2, 1968)!=29)
    //     printf("error: Feb 1968 is 29 days\n");
    // if (daysPerMonth(4, 1968)!=30)
    //     printf("error: Apr 1968 is 30 days\n");
    // if (validDate(31,11,1968))
    //     printf("error: Nov 31 1968 is not a valid date\n");
    // if (ordinal(1,3,1968)!=61)
    //     printf("error: Mar 1, 1968 is day n.61 in the year\n");
    
    // int a = 12, b= 15;
    // swap(&a,&b);
    // printf("a: %d, b: %d \n", a, b);

    /* int arr[6]={10,20,30,40,50,60};
    reverse_pointer(arr, 6);
    for (int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n"); */

    int matrix[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    /* int n=12, d=-48;
    normalize(&n, &d); */

    /* double x;
    unsigned n;
    printf("base ? ");
    scanf("%lf", &x);
    printf("exponent ? ");
    scanf("%u", &n);

    printf("%f to the %u = %f\n", x, n, power_eff(x, n)); */
    int arr[] = {-9, -8, 1, 2, 3, 5, 7, 9, 11, -11, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // int *result = search(1, a, size);

    // if (result != NULL) {
    //     printf("Found: %d\n", *result);
    // } else {
    //     printf("Not found\n");
    // }
    // unsigned month=2, date=28, year=1968;
    // nextDate(&month, &date, &year);
    // extern int check_extern;
    // int length=10;
    // if (length==0){
    //     return 0;
    // }
    // else{
    //     for (int i=1;i<=length;i++){
    //         printf("%d ", Fibonacci(i));
    //     }
    // }
    // int a[]={0,1,4};
    // int b[]={-1, 2,3,5};
    // int size_a=sizeof(a)/sizeof(a[0]);
    // int size_b=sizeof(b)/sizeof(b[0]);
    // int size_c = size_a+size_b;
    // int c[size_c];

    // mergeSort(arr, size);
    // for (int i=0; i<size;i++){
    //     printf("%d ", arr[i]);
    // }
    int max=20;
    char line[max];

    int length = readLine(line, max);
    printf("%s\n", line);
    printf("%d", length);

    return 0;
}
