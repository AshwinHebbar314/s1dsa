#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "hashing.h"
#include "singly_LL_header.h"

void display(ITEM[],int);

// Main program that tests all sorting functions
int main() {
    
    ITEM key;
    LinkedList *hash_table[SIZE];
    int i, hash_key, collisions;
    KEY searchKey;
    
    bool found, stored, counted;
    
    FILE *fp1;
    
    // Initializing the hash table for chaining
    for (i = 0; i < SIZE; i++) {
        hash_table[i] = createList(); // Creating a list for every slot in the hash table
    }
	collisions = 0;

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
				hash_key = hash(key.employeeNumber);
				stored = false;
				counted = false;
				// To illustrate separate chaining technique for hashing
				do {
                    if (hash_table[hash_key]->head != NULL)
                            collisions++;
                    addNode(hash_table[hash_key], key);
                    stored = true;
				} while (!stored);
			} while (!feof(fp1));
		}
		printf("\n\tNumber of collisions: %d\n", collisions);
	}
	fclose(fp1);

	printf("\n\tEnter the item to be searched: ");
	scanf("%d",&searchKey);
	printf("\n");

	found = hashing_chaining(hash_table,searchKey);
	if (found)
		printf("\tHash-based Search-Using Chaining: %d found in the list!\n",searchKey);
	else
		printf("\tHash-based Search-Using Chaining: %d not found in the list\n",searchKey);
    /*
    // Print the list of items chained for a particular index
    printf("\n\tEnter an index of the hash table: ");
    scanf("%d",&i);
    printf("\n\tElements in the list at this index are:\n\n\t\t");
    for (ListNode* temp = hash_table[i]->head;temp != NULL; temp = temp->next) {
        printf("%d",temp->key.employeeNumber);
        if (temp->next != NULL) // Do not want to print after the last node in the list
            printf("->");
    }
    
    // Print the list of items chained for all indices
    for (i = 0; i < SIZE; i++) {
        printf("\tIndex %d: ",i);
        for (ListNode* temp = hash_table[i]->head;temp != NULL; temp = temp->next) {
            printf("%d",temp->key.employeeNumber);
            if (temp->next != NULL) // Do not want to print after the last node in the list
                printf("->");
        }
        printf("\n");
    }
    printf("\n");*/
	return 1;
}
