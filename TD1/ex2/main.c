#include <stdio.h>
#include "prime.h"
#include <time.h>

void main(){
    clock_t start, end;
    float exec_time;
    start = clock();
    int n ;
    scanf("%i",&n);
    int naive_prime_count = naive_prime(n);

    end = clock();
    exec_time = ((float)(end - start))/ CLOCKS_PER_SEC;
    printf("Algo naif: nombre de nombre premier jusqu'a %i: %i\nTemps d'execution: %f seconds\n",n,naive_prime_count, exec_time);

    // efficient prime
    start = clock();
    int efficient_prime_count = efficient_prime(n);

    end = clock();
    exec_time = ((float)(end - start))/ CLOCKS_PER_SEC;
    printf("Efficient Algo: nombre de nombre premier jusqu'a %i: %i\nTemps d'execution: %f seconds\n",n,efficient_prime_count, exec_time);





}