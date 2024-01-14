// Q1: Write a C program that finds the number of digits of an integer. The integer is taken as input from the user. The program should display meaningful messages

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int num_copy = num;

    while(num_copy != 0) {
        num_copy /= 10;
        count++;
    }
    
    printf("The number of digits in %d is %d\n", num, count);
}
