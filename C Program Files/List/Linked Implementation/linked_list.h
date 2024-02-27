#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int ITEM;

typedef struct ListNode
{
    ITEM item;
    struct ListNode *next;
} ListNode;

typedef struct LinkedList
{
    ListNode* head;
} LinkedList;

LinkedList* createList(void);
ListNode* createNode(ITEM);

void addItem(LinkedList*, ITEM);
void displayList(LinkedList*);
void deleteItem(LinkedList*, ITEM);

void deleteAllOccurrences(LinkedList*,ITEM);
int getListSize(LinkedList*);
bool isItemThere(LinkedList*,ITEM);
int getItemPosition(LinkedList*,ITEM);

