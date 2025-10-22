#include "utils.h"

bool is_sorted_nondecreasing(int *arr, int n)
{
    // return true if array is sorted and false otherwise
    for (int i=0; i<n-1;i++){
        if (arr[i+1]>= arr[i])
        return 1;
    }
    return 0;
}

int min_int(int a, int b)
{
    // return smallest value between a and b
    if (a <b) return a ;
    else return b; 
}