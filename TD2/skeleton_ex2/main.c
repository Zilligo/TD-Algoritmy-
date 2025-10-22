#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

int n = 10000;


int main(void)
{
    clock_t start, end;
    float exec_time;

    int *arr = malloc(n * sizeof(int)); 
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000; // ici je génère un tableau de 10000 valeurs random 

    int *tmp = malloc(n * sizeof(int));


    // selection sort 
    copy_array(arr, tmp, n);
    start = clock();
    selection_sort(tmp, n);
    end = clock();
    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    if (is_sorted_nondecreasing(tmp, n))
        printf("Temps d'execution du selection sort : %f secondes\n", exec_time);

    // insert sort
    copy_array(arr, tmp, n);
    start = clock();
    insertion_sort(tmp, n);
    end = clock();
    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    if (is_sorted_nondecreasing(tmp, n))
        printf("Temps d'execution du insertion sort : %f secondes\n", exec_time);

    // bubble sort
    copy_array(arr, tmp, n);
    start = clock();
    bubble_sort(tmp, n);
    end = clock();
    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    if (is_sorted_nondecreasing(tmp, n))
        printf("Temps d'execution du bubble sort : %f secondes\n", exec_time);

    // merge sort
    copy_array(arr, tmp, n);
    start = clock();
    merge_sort(tmp, n);
    end = clock();
    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    if (is_sorted_nondecreasing(tmp, n))
        printf("Temps d'execution du merge sort : %f secondes\n", exec_time);

    // quick sort
    copy_array(arr, tmp, n);
    start = clock();
    quick_sort(tmp, n);
    end = clock();
    exec_time = ((float)(end - start)) / CLOCKS_PER_SEC;
    if (is_sorted_nondecreasing(tmp, n))
        printf("Temps d'execution du quick sort : %f secondes\n", exec_time);

    free(tmp);
    return 0;
}
