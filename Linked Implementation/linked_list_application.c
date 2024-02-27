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

        puts("Demo for ReplaceAll");
        puts("Enter an element to look for: ");
        scanf("%d", &itemToFind);
        puts("Enter an item to replace: ");
        scanf("%d", &newItem);
        int no_of_replace = replaceAll(list, itemToFind, newItem);
        if(no_of_replace == 0) {
            printf("\nElement %d not found :(", itemToFind);
        }
        else {
            puts("The list after replacing all occurrences of the element:");
            displayList(list);
            printf("\n%d occurrences of %d replaced with %d\n", no_of_replace, itemToFind, newItem);
        }
    } 
    return 0;
}
