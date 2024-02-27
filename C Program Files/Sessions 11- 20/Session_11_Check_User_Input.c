//  Session12_Check_User_Input.c

//  Created by Usha on 28/11/2023

#include <stdio.h> // Including the header file

int main() { // Our main program starts here
    int number;
    
    printf("\nEnter a positive integer greater than 0. I will tell you if it is odd or even!\n");
    scanf("%d",&number); // Taking user input in number
    if (number <= 0) // Checking if the input number is a valid
        printf("Input number must be a positive integer greater than 0.\n");
    else {
        printf("Input number is greater than 0.\n");
        if (number % 2 == 0) // Checking if the input number is even or odd
            printf("Input number is an even number.\n");
        else
            printf("Input number is an odd number.\n\n");
    }
}
