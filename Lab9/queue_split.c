#include <stdlib.h>
#include "queue.h"
#include <time.h>

#define VNUMBSIZE 20

// Scheduling of applicants for an interview
int main() {
    QUEUE *vehicle_queue,*new_vehicle_queue;
    ITEM i, vehicle_to_move;
    int vehicles[VNUMBSIZE] = {99,101,104,105,106,107,109,110,111,112,114,201,232,198,176,154,167,111,89,78};
    srand (time(NULL));
    int rnumber = rand() % VNUMBSIZE; // Holds the randomly generated number
    
    // Creating a stack of characters
    vehicle_queue = create(vehicle_queue); // Create the original queue of vehicles 
    
    i = 0;
    while (i < VNUMBSIZE) {
        if (!isFull(vehicle_queue)) {
            add(vehicle_queue,vehicles[i]);
            printf("Added vehicle: %d\n",vehicles[i]);
        }
        i++;
    }

    printf("\n\t\t The random number is: %d\n", rnumber);

    // TO DO #1
    // Get and print the vehicle at the front of the original queue.
    printf("\n TODO #1\n");
    printf("\n\t The front of the queue is: %d\n", front(vehicle_queue));
    
    // TO DO #2
    // Create a new Queue
    printf("\n TODO #2\n");
    new_vehicle_queue = create(new_vehicle_queue);
    printf("\n\t Created new Queue new_vehicle_queue\n");


    // TO DO #3
    // Move elements in the original queue from the rear until the random point into the new queue. Vehicle at random point is not moved.
    // use rear_pop() to remove the vehicle from the rear of the original queue
    printf("\n TODO #3\n");
    printf("\n\t Moving elements in the original queue from the rear until the random point into the new queue.\n");
    
    for(i = rnumber; i < VNUMBSIZE - 1; i++) {
        if (!isFull(new_vehicle_queue)) {
            add(new_vehicle_queue, rear_pop(vehicle_queue));
        }
    }

    // TO DO #4
    // Appropriately set the rear of the original queue to the random point.
    printf("\n TODO #4\n");
    printf("\n\t The rear of the original queue is: %d\n", rear(vehicle_queue));

    // TO DO #5
    // Get and display the vehicle at the front of the new queue.

    printf("\n TODO #5\n");
    printf("\n\t The front of the new queue is: %d\n", front(new_vehicle_queue));

    // Listing the different queue items:

    printf("\n\t\tPRINTING QUEUE ITEMS:\n");

    // printf("\nThe original Queue Items now are:\n");
    // while (!isEmpty(vehicle_queue)) {
    //     printf("  %d", delete(vehicle_queue));
    // }

    // printf("\nThe new Queue Items now are:\n");
    // while (!isEmpty(new_vehicle_queue)) {
    //     printf("  %d", delete(new_vehicle_queue));
    // }

    display(vehicle_queue);
    display(new_vehicle_queue);

    QUEUE *qt;

    qt = create(qt);

    // delete(qt);
    display(qt);

    printf("\n");
}
