#include <stdio.h>
#include "fib.h"
#include <time.h>

void main(){
    clock_t start, end;
    double exec_time;

    start = clock();

    long long result = naive_fib(45);
    printf("naive_fib(45) = %lld\n", result);

    end = clock();

    exec_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Temps d'exécution : %f secondes\n", exec_time);

}