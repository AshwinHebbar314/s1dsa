#include "queue.h"

#define APPNUMBSIZE 10

// Scheduling of applicants for an interview
int main() {
    QUEUE *applicant_queue;
    ITEM item,i;
    int applications[APPNUMBSIZE] = {101,104,105,106,107,109,110,111,112,114};

    // Creating a stack of characters
    applicant_queue = create(applicant_queue);

    i = 0;
    while (i < APPNUMBSIZE) {
        if (!isFull(applicant_queue)) {
            add(applicant_queue,applications[i]);
            printf("Added an item\n");
        }
        i++;
    }

    while (true) {
        if (!isEmpty(applicant_queue)) {
            printf("Before delete: %d\t%d\n", applicant_queue->front_queue,applicant_queue->rear_queue);
            item = delete(applicant_queue);
            printf("After delete:  %d\t%d\n\n", applicant_queue->front_queue,applicant_queue->rear_queue);
        }
        else {
            printf("Queue is empty\n");
            break;
        }
    }
}
