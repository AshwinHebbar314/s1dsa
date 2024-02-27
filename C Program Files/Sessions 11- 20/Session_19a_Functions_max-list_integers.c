#include <stdio.h>
// Illustrating the use of functions
// Function prototypes or declarations
#define SIZE 10

void read_integers(int [], int);
int find_max_integer(int *, int);

int main() {
    int list_numbers[SIZE], largest;
    read_integers(list_numbers, SIZE);
    largest = find_max_integer(list_numbers, SIZE);
    printf("\nThe largest number in the list is %d\n\n",largest);
}

void read_integers(int list[], int size) {
    int i;
    printf("\nEnter %d integers:",size);
    for (i = 0; i < size; i++) {
        scanf("%d",&list[i]);
    }
    printf("\t\nInput values are:\n");
    for (i = 0; i < size; i++) {
        printf("\t%d\n",list[i]);
    }
}

int find_max_integer(int list[], int size) {
    int max,i;
    
    max = list[0];
    for (i = 1; i < size; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    return max;
}
