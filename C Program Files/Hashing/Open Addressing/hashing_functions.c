#include <stdio.h>
#include <stdbool.h>
#include "hashing.h"

int hash(KEY key) {

	return (key % SIZE-1);
}

bool hashing_open_addressing(ITEM list[], KEY key, int size) {

	int hashedValue;
	bool found;

	hashedValue = hash(key);
	found = false;
	do {
		if (list[hashedValue].employeeNumber == key)
			found = true;
		else
			if (list[hashedValue].employeeNumber == -1)
				break;
			else
				hashedValue++;
	} while (!found && hashedValue != size);
	return found;
}
