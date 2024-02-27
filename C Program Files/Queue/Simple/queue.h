#include <stdio.h>
#include <stdbool.h>

#define SIZE 50

typedef int ITEM;

typedef struct queue {
   ITEM queue[SIZE];
   int front_queue;
   int rear_queue;
} QUEUE;

QUEUE* create(QUEUE*);
int add(QUEUE*, ITEM);
ITEM delete(QUEUE*);
ITEM front(QUEUE*);
bool isEmpty(QUEUE*);
bool isFull(QUEUE*);
