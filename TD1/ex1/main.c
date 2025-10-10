#include <stdio.h>
#include "fib.h"
#include <time.h>

void main(){
    clock_t start, end;
    float exec_time;
    float exec_time2;

    start = clock();
    long long result1 = naive_fib(45);
    printf("naive_fib(45) = %lld\n", result1);
    end = clock();

    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    printf("Temps d'exécution : %f secondes\n", exec_time);

    // dynamic fibonacci
    start = clock();
    long long result2 = dynamic_fib(45);
    printf("dynamic_fib(45) = %lld\n", result2);

    end = clock();
    exec_time2 = ((float)(end - start)) / CLOCKS_PER_SEC;
    printf("Temps d'exécution : %f secondes\n", exec_time2 );




}