#include <stdio.h>
#include <stdbool.h>
#include "../Sorting-Using Arrays/sorting.h"
#include "search.h"

// Main program that tests all sorting functions
int main() {

	// Input data set is available in two files - one is ordered and the other unordered
	// In applications, lists are not expected to be sorted - one of the sort functions, if required, should be called on the unordered input dataset
    ITEM numbers[SIZE], key, block_size;
    int i, number, size;
    bool found;
    FILE *fp;
    
	i = 0;
	fp = fopen("numbers.txt", "r");
	if (fp == NULL)
		printf("\nError opening forhashing.txt\n");
	else {
		// Checking for empty by going to the end of the file
		fseek(fp, 0, SEEK_END);
		if (ftell(fp) == 0)
			printf("\nFile is empty!\n");
		else {
			// Getting back to the beginning of the file
			fseek(fp, 0, SEEK_SET);
			// Reading data from the file
			do {
				fscanf(fp, "%d", &number);
				numbers[i] = number;
				i++;
			} while (!feof(fp));
		}
	}
	fclose(fp);
    size = i;

	printf("\nEnter the item to be searched: ");
	scanf("%d",&key);

    printf("\n\n");
    found = linear_search(numbers,key,size);
	if (found)
		printf("\tLinear Search: %d found in the list!\n",key);
	else
		printf("\tLinear Search: %d not found in the list\n",key);
    printf("\n\n");
    
    insertion_sort(numbers,size);
	found = binary_search(numbers,key,size);
	if (found)
		printf("\tBinary Search: %d found in the list!\n",key);
	else
		printf("\tBinary Search: %d not found in the list\n",key);
    printf("\n\n");
    
    // No need to sort again in this example
    // Added if jump search is called separately
    insertion_sort(numbers,size);
    block_size = 25;
    found = jump_search(numbers,key,block_size,size);
    if (found)
        printf("\tJump Search: %d found in the list!\n",key);
    else
        printf("\tJump Search: %d not found in the list\n",key);
    printf("\n\n");
}



