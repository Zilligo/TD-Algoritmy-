#include "fib.h"

long long naive_fib(int n){
    if (n<=1){
        return n;
    }
    else {
        return naive_fib(n-1) + naive_fib(n-2);
    }
}

long long dynamic_fib(int n){
    int un=0;
    int u0 = 1;
    int u1 = 1;
    if (n<=1){
        return n;
    }
    for (int i=2; i<n; i++ ){
        un = u0+u1;
        u0 = u1;
        u1 = un;
    }
        
    return un;
}