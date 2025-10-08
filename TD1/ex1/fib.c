#include "fib.h"

long long naive_fib(int n){
    if (n<=1){
        return n;
    }
    else {
        return naive_fib(n-1) + naive_fib(n-2);
    }
}