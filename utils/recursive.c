#include<stdio.h>

// power in a recursive way
double power_rec(double base, unsigned n){
    if (n==0)
        return 1.0;
    return base * power_rec(base, n-1);
}

// x^n = 1 if n == 0
// otherwise
// x^n = x^(n/2) * x^(n/2) if n is even
// otherwise (n is odd)
// x^n = x * x^(n-1)

double power_eff(double base, unsigned n){
    if (n==0)
        return 1.0;
    else if (n%2 == 0){
        double half_pow = power_eff(base, n/2);
        return half_pow * half_pow;
    }
    return base * power_rec(base, n-1);
}

//translate this version into iteration

//hanoi tower
void move(unsigned n, unsigned source, unsigned dest, unsigned spare){
    if (n==1)
        printf("%u -> %u\n", source, dest);
    if (n>1){
        move(n-1, source, spare, dest);
        move(1, source, dest, spare);
        move(n-1, spare, dest, source);
    }
}

//m-th summation of first n natural numbers
int sumFirst(int n){
    return n*(n+1)/2;
}

int sumMth(int n, int m){
    if (m>1)
        return sumFirst(sumMth(n, m-1));
    else
        return sumFirst(n);
}


//gcd
unsigned gcd(unsigned a, unsigned b){
    if (b>0){
        return gcd(b, a % b);
    }
    else
        return a;
}

//print a pattern (1)
void pattern(int n){
    if (n<=0){
        printf("%d ", n);
        return;
    }
    printf("%d ", n);
    pattern(n-5);
    printf("%d ", n);
}

void pattern_ite(int n){
    int init = n;
    
    while (n>=0){
        printf("%d ", n);
        n -= 5;
    }

    if (n==0){
        while (n<=init){
            n += 5;
            printf("%d ", n);
        }
    }
    else
        while (n<=init){
            printf("%d ", n);
            n += 5;
        }
}

void pattern_2(unsigned n){
    if (n==0){
        return;
    }

    pattern_2(n-1);
    for (int i=0;i<n;i++){
        printf("_");
    }
    printf("\n");
    pattern_2(n-1);
}

//binary numbers
int is_binary_num(unsigned n){
    if (n%10!=0 && n%10!=1)
        return 0;
    
}