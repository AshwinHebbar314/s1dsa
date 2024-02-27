#include <stdio.h>

int main() {
    float m1[2][4] = {1.2,1.3,1.4,1.5,1.2,1.3,1.4,1.5};
    float m2[2][4] = {1.2,1.3,1.4,1.5,1.2,1.3,1.4,1.5};
    float m3[2][4] = {0,0,0,0,0,0,0,0};
    float vector[] = {1,2,3,4,5,6};
    int i, j, m, n, size;
    
    m = 2;
    n = 4;
    size = 6;
    
    // Print the one dimensional array
    //for (i = 0; i < size; i++) {
        //printf("%f\n",vector[i]);
    //}
    // Print the two dimensional array - m1
    for (i = 0; i < m; i++) { // Iterating through each row
        for (j = 0; j < n; j++) { // Iterating through each column of each row
            printf("%f ",m1[i][j]);
        }
        printf("\n");
    }
    
    // To add m1 and m2 and store the result in m3
    for (i = 0; i < m; i++) { // Iterating through each row
        for (j = 0; j < n; j++) { // Iterating through each column of each row
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Printing the new matrix:\n");
    for (i = 0; i < m; i++) { // Iterating through each row
        for (j = 0; j < n; j++) { // Iterating through each column of each row
            printf("%f ",m3[i][j]);
        }
        printf("\n");
    }
}
