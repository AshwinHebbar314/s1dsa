//  Session12_Check_User_Input.c

//  Created by Usha on 28/11/2023

#include <stdio.h> // Including the header file

int main() { // Our main program starts here
    int day_number;
    
    printf("\n\tEnter the number of day of the week (Sunday is 1, Monday is 2, and so on: ");
    scanf("%d",&day_number);
    switch (day_number) {
    case 1:
        printf("\n\t\tSunday\n\n");
        break;
    case 2: 
        printf("\n\t\tMonday\n\n");
        break;
    case 3:
        printf("\n\t\tTuesday\n\n");
        break;
    default:
        printf("\n\t\tInput Error\n\n");
    }
    printf("Out of switch...case\n\n");
}
