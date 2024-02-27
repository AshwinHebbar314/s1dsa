#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"
#define SIZE 12

int main (void)
{
    int i, position;
    FILE *fp;
    ITEM item, itemToFind, newItem;
    LinkedList* list;

    //Opening the file for reading
    fp = fopen("numbers.txt", "r");
    if(fp == NULL)
        printf("Error opening file.\n");
    else
    {
        // Creating a new list
        list = createList();

        //Reading items from the file and adding them to the list
        do
        {
            fscanf(fp, "%d", &item);
            addItem(list, item);
        } while(!feof(fp));

        fclose(fp);
        
        // Getting the size of the list
        printf("\nThe size of the list is %d.\n\n",getListSize(list));

        // Displaying the list
        displayList(list);

        // Deleting an element from the list
        printf("\nEnter the item of the node to be deleted\n");
        scanf("%d", &item);
        deleteItem(list, item);
        
        // Getting the size of the list
        printf("\nThe size of the list is %d.\n\n",getListSize(list));

        // Displaying modified list after deletion
        displayList(list);
        
        // Finding an item in the list
        printf("\n\nEnter an item to find in the list: ");
        scanf("%d",&itemToFind);
        printf("\nCalling function isItemThere!\n");
        if (isItemThere(list,itemToFind)) {
            printf("\n\t%d is in the list!\n\n",itemToFind);
        }
        else {
            printf("\n\t%d is not in the list!\n\n",itemToFind);
        }
        printf("\nCalling function getItemPosition!\n");
        position = getItemPosition(list,itemToFind);
        if (position == 0) {
            printf("\n\t%d is not in the list!\n\n",itemToFind);
        }
        else {
            printf("\n\t%d is at position %d!\n\n",itemToFind,position);
        }
    }
    return 0;
}
