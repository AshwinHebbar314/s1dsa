// Take a three-digit integer, extract left, middle and right digits and display them.

#include <stdio.h>

int main() {
    int num;
    int left, mid, right;

    printf("Enter a 3 digit number:\n");
    scanf("%d", &num);
    
    left = num / 100;
    mid = (num / 10) % 10;
    right = num % 10;

    printf("The left digit is: %d\n", left);
    printf("The middle digit is: %d\n", mid);
    printf("The right digit is: %d\n", right);
}