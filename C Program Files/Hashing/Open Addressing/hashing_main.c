#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "hashing.h"

void display(ITEM[],int);

// Main program that tests all sorting functions
int main() {

    ITEM openAddrHashTable[SIZE*2], key;
    int i, j, hashedValue, countCollision;
	char searchNames[2][50];
	KEY searchKey;

	bool found, stored, counted;

	FILE *fp1;

	// Initializing the hash table for open addressing
	for (i = 0; i < SIZE*2; i++)
		openAddrHashTable[i].employeeNumber = -1; // Assuming list of keys are positive integers

	countCollision = 0;

	fp1 = fopen("employees.txt", "r");
	if (fp1 == NULL)
		printf("\nError opening employees.txt\n");
	else {
		// Checking for empty by going to the end of the file
		fseek(fp1, 0, SEEK_END);
		if (ftell(fp1) == 0)
			printf("\nFile is empty!\n");
		else {
			// Getting back to the beginning of the file
			fseek(fp1, 0, SEEK_SET);
			// Reading data from the file
			do {
				fscanf(fp1, "%d%s%s", &key.employeeNumber, key.employeeName, key.jobCode);
				hashedValue = hash(key.employeeNumber);
				stored = false;
				counted = false;
				// To illustrate open addressing technique for hashing
				do {
					if (openAddrHashTable[hashedValue].employeeNumber == -1) {
						openAddrHashTable[hashedValue] = key;
						stored = true;
					}
					else {
                        // Applying open addressing 
						hashedValue++;
						if (!counted) {
							countCollision++;
							counted = true;
						}
					}
                } while (!stored);
			} while (!feof(fp1));
		}
		printf("Number of collisions: %d\n", countCollision);
	}
	fclose(fp1);

	printf("Enter the item to be searched: ");
	scanf("%d",&searchKey);
	printf("\n");

	found = hashing_open_addressing(openAddrHashTable,searchKey,SIZE*2);
	if (found)
		printf("Hash-based Search-Using Open Addressing: %d found in the list!\n",searchKey);
	else
		printf("Hash-based Search-Using Open Addressing: %d not found in the list\n",searchKey);
	return 1;
}




