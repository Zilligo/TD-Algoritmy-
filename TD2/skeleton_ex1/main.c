#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"
#include "utils.h"

int main(void)
{
    // implement main here
    // create array example using malloc
    // use searching algorithms and compare runtime
    int n =200;
    int target = 501;
    int arr[200] = {
        1, 3, 6, 9, 12, 14, 17, 20, 24, 27,
        29, 32, 35, 38, 40, 43, 46, 49, 52, 55,
        57, 60, 62, 65, 67, 70, 72, 75, 77, 80,
        83, 85, 88, 90, 93, 96, 99, 101, 104, 107,
        110, 112, 115, 117, 120, 123, 126, 129, 132, 135,
        137, 139, 142, 144, 147, 149, 151, 153, 156, 158,
        160, 163, 165, 167, 169, 171, 174, 176, 178, 180,
        182, 184, 186, 188, 190, 192, 194, 196, 198, 200,
        203, 206, 209, 212, 214, 216, 219, 222, 225, 228,
        231, 233, 236, 239, 242, 245, 248, 250, 252, 254,
        257, 260, 263, 266, 268, 271, 274, 277, 279, 281,
        283, 286, 289, 292, 295, 298, 301, 304, 307, 310,
        313, 316, 319, 322, 325, 328, 331, 334, 336, 339,
        342, 344, 347, 349, 352, 355, 358, 360, 363, 366,
        368, 371, 374, 377, 380, 383, 386, 389, 392, 395,
        398, 401, 404, 407, 410, 412, 415, 418, 421, 423,
        426, 428, 431, 434, 437, 439, 442, 445, 448, 450,
        453, 455, 458, 461, 464, 467, 470, 472, 475, 478,
        480, 483, 486, 489, 492, 495, 498, 501, 504, 507,
        510, 513, 516, 519, 522, 525, 528, 531, 534, 537
    };

    if (is_sorted_nondecreasing(arr, n)){
        clock_t start, end;
        float exec_time;
        start = clock();
        int linear_s = linear_search(arr,n,target);
        end = clock();
        exec_time = ((float)(end - start))/ CLOCKS_PER_SEC;
        printf("Temps d'execution du Linear search pour trouver l'index de %i : %f secondes , indice : %i\n", target, exec_time, linear_s);

        start = clock();
        int jump_s = jump_search(arr,n,target);
        end = clock();
        exec_time = ((float)(end - start))/ CLOCKS_PER_SEC;
        printf("Temps d'execution du Jump search pour trouver l'index de %i : %f secondes , indice : %i \n",target, exec_time, jump_s);

        start = clock();
        int binary_s = binary_search(arr,n,target);
        end = clock();
        exec_time = ((float)(end - start))/ CLOCKS_PER_SEC;
        printf("Temps d'execution du Binary search pour trouver l'index de %i : %f secondes , indice : %i \n",target, exec_time, binary_s);
        
    } 


    return 0;

}
