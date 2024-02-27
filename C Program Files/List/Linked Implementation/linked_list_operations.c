#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

//Creates an empty list and returns the pointer to it
LinkedList* createList(void) {
    LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
    temp->head = NULL;
    return(temp);
}

//Create a node and returns a pointer to it.
ListNode* createNode(ITEM item) {
    ListNode* temp;
    temp = (ListNode*)malloc(sizeof(ListNode));
    if(temp == NULL)
    {
        printf("ERROR - Malloc failed!\n");
        exit(false);
    }
    else 
    {
        printf("SUCCESS - Malloc successfully allocated memory!\n");
        temp->item = item;
        temp->next = NULL;
        return(temp);
    }
}

//Adds an item at the end (appends) of the list
void addItem(LinkedList* list, ITEM item) {
    // Storing the head of the list in a temporary pointer to the node
    ListNode* temp = list->head;

    // Creating a new node with the given item
    ListNode* node = createNode(item);

    // Checking if the list is empty
    // List is empty with the head of the list is NULL
    if(temp == NULL)
    {
        list->head = node; // Make the head of the list point to the newly created node
        printf("First element added in the list!\n\n");
    }
    else
    {
        // Traversing from first node in the list to the end of the list
        while(temp->next != NULL)
            temp = temp->next; // Moves temp to the next node in the list
        
        // temp->next is NULL when the loop is completed
        // Adding the new item at the end of the list
        // The last element in the list now points to NULL
        temp->next = node; // temp->next is assigned the newly created nodes
        printf("New node added to the list!\n\n");
    }
}

// Displays the elements of the list in sequential order
void displayList(LinkedList* list) {
    ListNode* temp = list->head;

    int i = 1; // Using i to print the position of the item in the list
    printf("\n");
    if(temp == NULL) // If the head is NULL, no items to display
        printf("List is empty. Nothing to display.\n");
    else
    {
        // Traversing from first node in the list to the end of the list
        // Displaying the value in the node as the list is traversed
        while(temp != NULL)
        {
            printf("List element %d is: \t%d\n", i, temp->item);
            i++;
            temp = temp->next;
        }
    }
}

// Deletes the first occurrence of the item in the list
// Delete function searches for the item and then deletes it
// Adjusts the pointers so that all remaining nodes in the list stay connected
void deleteItem(LinkedList* list, ITEM item) {
    //Pointers to current and previous nodes
    ListNode *curr, *prev;
    prev = list->head; // Will point to the previous node
    curr = list->head; // will point to the current node

    printf("\n");
    if(curr == NULL)
        printf("List is empty. Nothing can be deleted.\n");
    else
    {
        //Element to be deleted is the first element in the list
        //Position of the head needs to be changed
        if(curr->item == item)
            list->head = list->head->next;
        else
        {
            //Element to be deleted is not the first element in the list
            while(curr != NULL)
            {
                if(curr->item == item)
                {
                    printf("Value in the node matches the item. Deleting node...\n");
                    //Pointing the next pointer of previous node to the next pointer of current node in case item matches
                    prev->next = curr->next; // Adjusting the node pointers before freeing the deleted node
                    free(curr); // Freeing the memory space after adjusting the links of other nodes
                    return;
                }
                else
                {
                    printf("Value in the node does not match the item. Moving on...\n");
                    //Saving the current pointer in previous pointer in case item does not match
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
    }
}

// Returns the number of items in the list
// Code similar to display list, traverses the list and count as traversal progresses
int getListSize(LinkedList* list) {
    ListNode* temp = list->head;

    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;

}

// Returns true or false if a given search key is found in the list
// Code similar to display list, traverses the list and checks if the key is found in the list
bool isItemThere(LinkedList* list,ITEM key) {
    ListNode* temp = list->head;

    while(temp != NULL) {
        if (temp->item == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Returns true or false if a given item is found in the list
// Code similar to display list, traverses the list, checks if the item is found in the list and returns the position where it occurs
int getItemPosition(LinkedList* list,ITEM item) {
    ListNode* temp = list->head;
    int position = 0; // 0 indicates item not found in the list

    while(temp != NULL) {
        position++;
        if (temp->item == item) {
            break;
        }
        temp = temp->next;
    }
    
    return position;
}
