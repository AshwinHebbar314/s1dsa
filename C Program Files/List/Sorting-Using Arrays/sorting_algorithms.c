#include "sorting.h"

void display(int numbers[],int size) {
   int i;
    
   printf("[");
   // Iterate through all items
   for(i = 0;i < size; i++) {
      printf("%d ",numbers[i]);
   }

   printf("]\n");
}

void bubble_sort_1(int numbers[],int size) {
    int i,j,temp,iterations=0;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            iterations++;
            if (numbers[j] >= numbers[j+1]) {
                // If true, swap the elements
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
        // display(numbers,size);
    }
    printf("\tTotal number of iterations: %d\n",iterations);
}
    
void bubble_sort_2(int numbers[],int size) {

    int i, temp,iterations=0;
 	bool interchange;

	interchange = true;
	while (interchange) { // Outer iteration
		interchange = false;
		for (i = 0; i < size-1; i++) // Inner iteration
            iterations++;
			if (numbers[i] > numbers[i+1]) {
                // If true, swap the elements
                // Set the variable interchange to true indicating there has been a swap
				temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
				interchange = true;
			}
        // display(numbers,size);
	}
    printf("\tTotal number of iterations: %d\n",iterations);
}

void selection_sort(int numbers[],int size) {

    int indexMin, temp, i, j, iterations = 0;
    // Loop through all numbers
    for (i = 0; i < size-1; i++) {
        // Set current element as minimum
        indexMin = i;
        // Check the element to be minimum
        for (j = i+1;j < size;j++) {
            if(numbers[j] < numbers[indexMin])
                indexMin = j;
            iterations++;
        }
        if (indexMin != i) {
            //printf("Items swapped: [ %d, %d ]\n" , numbers[i], numbers[indexMin]);
            // Swap the elements
            temp = numbers[indexMin];
            numbers[indexMin] = numbers[i];
            numbers[i] = temp;
        }
        //printf("Iteration %d#:",(i+1));
        display(numbers,size);
    }
    printf("\tNumber of iterations: %d\n\n",iterations);
}
