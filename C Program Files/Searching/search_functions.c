#include <stdio.h>
#include <stdbool.h>
#include "search.h"
#include "../Sorting-Using Arrays/sorting.h"

int how_many; // Using this to know number of iterations for each search algorithm. In the final version of these algorithms, this variable and references to it must be deleted

bool linear_search(ITEM list[], ITEM item, int size) {

	bool found;
	int i;

    how_many = 0;
	found = false;
    for (i = 0; i < size && !found; i++) {
        how_many++;
        if (list[i] == item)
            found = true;
    }
    printf("\tNumber of iterations: %d\n\n",how_many);
	return found;
}

bool binary_search(ITEM list[], ITEM item, int size) {

	int low, high, mid;
	bool found;
    
	found = false;
	low = 0;
	high = size;

    how_many = 0;
	while ((!found) && (low <= high)) {
        how_many++;
		mid = (low + high) / 2;
		if (list[mid] == item)
			found = true;
		else if (list[mid] < item)
				low = mid + 1;
			else
				high = mid - 1;
	}
    printf("\tNumber of iterations: %d\n\n",how_many);
	if (found)
		return true;
	else
		return false;
}

bool jump_search(ITEM list[], ITEM item, int blockSize, int size) {

    int i, j, blockEnd;
    bool found;

    how_many = 0;
    found = false;
    i = 0;
    blockEnd = blockSize - 1;
    while (!found && i < size) {
        how_many++;
        if (item == list[blockEnd]) {
            found = true;
        }
        else {
            if (item > list[blockEnd]) {
                blockEnd = blockEnd + blockSize;
                if (blockEnd > size - 1)
                    blockEnd = size - 1;
                i = i + blockSize;
            }
            else {
                for (j = i; j < blockEnd; j++) {
                    if (item == list[j]) {
                        found = true;
                    }
                }
                if (!found)
                    break;
            }
        }
    }
    printf("\tNumber of iterations: %d\n\n",how_many);
    return found;
}
