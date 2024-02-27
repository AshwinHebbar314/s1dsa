#include <stdio.h>
#include <stdbool.h>
#include "hashing.h"
#include "singly_LL_header.h"

int hash(KEY key) {

	return (key % SIZE);
}

bool hashing_chaining(LinkedList *list[], KEY key) {

	int hashedValue;
	bool found;

	hashedValue = hash(key);
	found = find(list[hashedValue],key);
	return found;
}

