#include <stdlib.h>
#include "queue.h"

#define VNUMBSIZE 20

// Scheduling of applicants for an interview
int main() {
    QUEUE *vehicle_queue,*new_vehicle_queue;
    ITEM i, vehicle_to_move;
    int vehicles[VNUMBSIZE] = {99,101,104,105,106,107,109,110,111,112,114,201,232,198,176,154,167,111,89,78};
    int rnumber; // Holds the randomly generated number
    
    // Creating a stack of characters
    vehicle_queue = create(vehicle_queue); // Create the original queue of vehicles
    rnumber = rand() % VNUMBSIZE; // Generates a random number to get the random point in the queue
    
    i = 0;
    while (i < VNUMBSIZE) {
        if (!isFull(vehicle_queue)) {
            add(vehicle_queue,vehicles[i]);
            printf("Added vehicle: %d\n",vehicles[i]);
        }
        i++;
    }
    // TO DO
    
}
