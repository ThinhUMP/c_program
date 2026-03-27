#include<stdio.h>
// #include<utils/loops/loops.h>

void display(){
    printf("Display the first N natural numbers: ");
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        printf("%d ", i+1);
    }
}

/* 26 Mar 2026
Write a program that calculates b raised to the n, where b and n are a double and an integer, respectively, specified by the user.
*/

double power_ex(){
    double b, power=1.0;
    printf("base: ");
    scanf("%lf", &b);
    
    unsigned n;
    printf("exponent: ");
    scanf("%u", &n);
    for (int i = 1; i<=n; i++){/*
Write a program that calculates the first n prime numbers, 
where n is a positive integer specified by the user.
For example, if n is 6 then the output is:
2 3 5 7 11 13
*/

int is_prime(unsigned n){
    if (n<2){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    
    for (int i=3; i<=n/2;i++){
        if (n%i == 0){
            return 0;
        }
    }

    return 1;
}


void prime(){
    printf("N prime numbers: ");
    int n;
    scanf("%d", &n);

    int count=0, number = 2;

    while (count < n)
    {
        if (is_prime(number)){
            printf("%d ", number);
            count ++;
        }
        number ++;
    }
}
        power *= b;
    }
    printf("%f^%d = %f", b, n, power);
    return power;
}

/*
Write a program that calculates the "cubes" less than or equal to n, 
where n is a positive integer specified by the user.
For example, if n is 100 then the output is:
1 8 27 64
*/

int cubes(){
    printf("Calculates the cubes less than or equal to n\n");
    printf("n: ");
    unsigned n;
    scanf("%u", &n);
    double i=1;
    while (i*i*i <= n){
        printf("%lf ", i*i*i);
        i++;
    }
    return 0;
}

/*
Write a program that calculates the first n values of Fibonacci's sequence, 
where n is a positive integer specified by the user.
The first two values are 1 1. The other values are obtained as sum of the two preceding values, 
that is, if n is greater than two:
fib(n) = fib(n-1) + fib(n-2)
*/

void fibonacci(){
    printf("First n values of Fibonacci's sequence\n");
    printf("n: ");
    unsigned n;
    scanf("%u", &n);
    int fibo_1 = 0, fibo_2 = 1;
    for (int i=1; i<=n;i++){
        int temp;
        temp = fibo_1 + fibo_2;
        printf("%d ", temp);           
        fibo_1 = fibo_2;
        fibo_2 = temp;
    }
}

/*
Write a program that reads and arbitrary sequence of integers and calculates 
the length of the largest subsequence of increasing values.
For example, if the input sequence is
-1 -2 3 4 7 0 1 2
then the output is: 4
*/

void increase(){
    int x, previous, first=1, count=0, max_count = 0;

    while (scanf("%d", &x) == 1) {
        if (first){
            previous = x;
            first = 0;
        } 
        else if (x < previous) {
            printf("\n");
            if (count > max_count){
                max_count = count;
            }
            count = 0;
        }
        printf("%d ", x);
        previous = x;
        count+=1;
    }

    printf("\n");
    printf("Max monotone length: %d", max_count);
}

/*
Write a program that draws a "triangle" of size n, where n is a positive integer specified by the user.
For example, if n is 3 then the output is:
*/

void triangle(){
    printf("n size: ");
    unsigned n;
    scanf("%u", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}


/*
Write a program that calculates the grid of powers "x to the y" such that x and y are values in the range [1,n] ,
where n is a positive integer specified by the user.
For example, if n is 4 then the output is:
1 1 1 1
2 4 8 16
3 9 27 81
4 16 64 256
*/

unsigned power(unsigned b, unsigned n){
    unsigned power=1;
    for (int i = 1; i<=n; i++){
        power *= b;
    }
    return power;
}

void grid(){
    printf("n: ");
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1; j<=n; j++){
            printf("%u ", power(i, j));
        }
        printf("\n");
    }
}

/*
Write a program that calculates the first n prime numbers, 
where n is a positive integer specified by the user.
For example, if n is 6 then the output is:
2 3 5 7 11 13
*/

int is_prime(unsigned n){
    
    if (n<2){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else if (n%2==0){
        return 1;
    }

    for (int i=3; i<=n/i; i+=2){
        if (n%i == 0){
            return 0;
        }
    }

    return 1;
}

// a is prime if cannot be divided by a number <= square root of a


void prime(){
    printf("N prime numbers: ");
    int n;
    scanf("%d", &n);

    int count=0, number = 2;

    while (count < n)
    {
        if (is_prime(number)){
            printf("%d ", number);
            count ++;
        }
        number ++;
    }
    printf("\n");
}

int main(){
    // power_ex();
    // cubes();
    // fibonacci();
    // increase();
    // printf("%d", is_prime(2));
    prime();
    // triangle();
    // grid();
    return 0;
}

