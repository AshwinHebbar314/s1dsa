#include "queue.h"

// Scheduling of applicants for an interview
int main() {
    QUEUE *applicant_queue;
    ITEM item;
    FILE *file_pointer;

    file_pointer = fopen("Applicant_Data.txt","r");

    // Creating a stack of characters
    applicant_queue = create(applicant_queue);

    while (true) {
        fscanf(file_pointer,"%s",item.appln_number);
        fscanf(file_pointer,"%s",item.appln_name);
        printf("\n\t%s\n\t%s\n", item.appln_number, item.appln_name);
        //printf("Before insert: %d\t%d\n", applicantQueue->front_queue,applicantQueue->rear_queue);
        if (!isFull(applicant_queue)) {
            add(applicant_queue,item);
            if (feof(file_pointer))
                break;
        }
        else
		break;
    }

    while (true) {
        if (!isEmpty(applicant_queue)) {
            //printf("Before delete: %d\t%d\n", applicantQueue->front_queue,applicantQueue->rear_queue);
            item = delete(applicant_queue);
            printf("\t%s\t%s\n", item.appln_number, item.appln_name);
            //printf("After delete: %d\t%d\n", applicantQueue->front_queue,applicantQueue->rear_queue);
        }
        else {
            printf("Queue is empty\n");
            break;
        }
    }
}
