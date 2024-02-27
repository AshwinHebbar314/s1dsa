#include <stdlib.h>
#include <time.h>
#include "sorting.h"

#define N 20

int main() {
    //int numbers[N] = {312, 312, 312, 600, 102, 32, 14, 78};
    //int numbers[N] = {1, 24, 56, 60, 102, 321, 1401, 7888};
    int numbers[N];
    int i;
    
    srand(time(0));
    for (i = 0; i < N; i++) {
        numbers[i] = rand() % 100;
    }
    
    // Printing the input dataset
    printf("\n\tInput dataset: ");
    display(numbers,N);
    printf("\n");

    printf("\tBubble sort algorithm-1:\n");
    bubble_sort_1(numbers,N);
    display(numbers,N);
    printf("\n");
    
    printf("\tBubble sort algorithm-2:\n");
    bubble_sort_2(numbers,N);
    display(numbers,N);
    printf("\n");
    
    printf("\tSelection sort algorithm:\n");
    selection_sort(numbers,N);
    display(numbers,N);
    printf("\n");

    return 1;
}
