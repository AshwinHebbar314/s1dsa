// Take a two-digit integer, reverse the digits of the number. 
// Print the original and the reversed number.
// For instance, if the integer is 12, the reversed number is 21.

#include <stdio.h>

int main() {

    int num, rev;
    int left, right;

    printf("Enter a 2 digit number: ");
    scanf("%d", &num);

    left = num / 10;
    right  = num % 10;

    rev = (right * 10) + left;

    printf("The original number is: %d\n", num);
    printf("The reversed number is: %d\n", rev);
}
