#include <stdio.h>

double power(double b, unsigned n){
        double power=1.0;
        for (int i = 1; i<=n; i++){
            power *= b;
        }
        return power;
}
