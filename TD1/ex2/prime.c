#include <math.h>

int naive_prime(int n) {
    int counter = 0;

    if (n < 2)
        return 0;

    for (int i = 2; i <= n; i++) {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            counter++;
    }

    return counter;
}

int efficient_prime(int n){
    if (n < 2)
        return 0;

    int counter = 0;
    int is_prime[n+1];

    for (int i =0; i<=n; i++)
        is_prime[i] = 1;
        
    is_prime[0] = 0;
    is_prime[1] = 0;

    for (int i =2; i<= sqrt(n); i++){
        if (is_prime[i]){
            for (int j = i*i; j<= n; j+=i)
                is_prime[j] = 0;
        }
    }      

    for (int i=2; i<=n; i++){
        if (is_prime[i])
            counter++;
    }
    
    return counter;
}
    