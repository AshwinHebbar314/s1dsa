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

void insertion_sort(int numbers[],int size) {
    int value, index, i, iterations = 0;

   // Loop through all numbers
   for(i = 1; i < size; i++) {
       // This is the value to be inserted
       value = numbers[i];
       // Select the position at which value to be inserted
       index = i;
       // Check if previous element is larger than the value to be inserted
       while (index > 0 && numbers[index-1] > value) {
           numbers[index] = numbers[index-1];
           index--;
           printf(" item moved : %d\n" , numbers[index]);
           iterations++;
       }
       if(index != i) {
           printf(" item inserted : %d, at position : %d\n" , value,index);
           // Insert the number
           numbers[index] = value;
       }
       printf("\n");
       printf("Iteration %d#:",i);
       display(numbers,size);
       printf("\n");
   }
   printf("\tNumber of iterations: %d\n\n",iterations);
}

void merge(int low, int mid, int high, int numbers[], int temp[]) {
   int val1, val2, i;
    val1 = low;
    val2 = mid + 1;
   for(i = low; val1 <= mid && val2 <= high; i++) {
      if(numbers[val1] <= numbers[val2])
         temp[i] = numbers[val1++];
      else
         temp[i] = numbers[val2++];
   }
   while(val1 <= mid)
      temp[i++] = numbers[val1++];

   while(val2 <= high)
      temp[i++] = numbers[val2++];

   for(i = low; i <= high; i++)
      numbers[i] = temp[i];
}

void merge_sort(int low, int high, int numbers[], int temp[]) {
    int mid;

    if(low < high) {
        mid = (low + high) / 2;
        merge_sort(low, mid, numbers, temp);
        merge_sort(mid+1, high, numbers, temp);
        merge(low, mid, high, numbers, temp);
    }
    else
        return;
}

void quick_sort(int low, int high, int numbers[]) {
    int i, j, pivot;
    int temp;


    if (low < high) {
        pivot = low;
        i = low;
        j = high;

        while (i < j) {
            while (numbers[i] <= numbers[pivot] && i < high)
                i++;
            while (numbers[j] > numbers[pivot] && j > low)
                j--;
            if (i < j) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
        // Swap
        temp = numbers[pivot];
        numbers[pivot] = numbers[j];
        numbers[j] = temp;
        quick_sort(low,j-1,numbers);
        quick_sort(j+1,high,numbers);
    }
}
