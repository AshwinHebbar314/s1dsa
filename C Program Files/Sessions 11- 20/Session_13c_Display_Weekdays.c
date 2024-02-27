//  Session12_Check_User_Input.c

//  Created by Usha on 28/11/2023

#include <stdio.h> // Including the header file

int main() { // Our main program starts here
    int day_number;
    
    printf("\n\tEnter the number of day of the week (Sunday is 1, Monday is 2, and so on: ");
    scanf("%d",&day_number);
    while (day_number <= 0 || day_number >= 8) {
        printf("\n\tEnter only a number between 1 and 7: ");
        scanf("%d",&day_number);
    }
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
        case 4:
            printf("\n\t\tWednesday\n\n");
            break;
        case 5:
            printf("\n\t\tThursday\n\n");
            break;
        case 6:
            printf("\n\t\tFriday\n\n");
            break;
        case 7:
            printf("\n\t\tSaturday\n\n");
            break;
    }
}
