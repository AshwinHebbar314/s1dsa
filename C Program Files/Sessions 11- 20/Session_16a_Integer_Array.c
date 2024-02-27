#include <stdio.h>

int main() {
    int vector[] = {10,100,5,7,67,12};
    int sum[] = {0,0,0,0,0,0};
    int i,k,size;
    
    printf("\n\nProcessing:\n\n");
    size = 6;
    for (i = 0; i < size; i++) {
        for (k = 1; k <= vector[i]; k++) {
            sum[i] = sum[i] + k;
        }
    }
    printf("1 + 2 + 3 ... + n for each element of vector calculated\n\n");
    for (i = 0; i < size; i++) {
        printf("\t1 + 2 + 3 + ... %d is %d\n",vector[i],sum[i]);
    }
    printf("\n\n");
    return 0;
}
