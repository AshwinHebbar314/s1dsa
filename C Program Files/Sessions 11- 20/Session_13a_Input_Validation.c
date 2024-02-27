#include <stdio.h> // Including the header file

int main() { // Our main program starts here
    int number;
    
    printf("\nEnter a positive integer greater than 0. I will tell you if it is odd or even!\n");
    scanf("%d",&number); // Taking user input in number
    while (number <= 0) {
        printf("\n\n\tYour input is incorrect!");
        printf("\n\n\tEnter only a positive integer greater than 0: ");
        scanf("%d",&number);
    }
    printf("\nYes, the number is indeed a positive integer! The number is %d.\n\n",number);
}
