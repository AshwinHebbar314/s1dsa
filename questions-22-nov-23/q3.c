// Take a three-digit integer, reverse the digits of the number. Print the original and the reversed number. For instance, if the integer is 123, the reversed number is 321.

#include <stdio.h>

int main() {
    int num, rev = 0;

    int remainder, temp_num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp_num = num;

    while(temp_num > 0) {
        remainder = temp_num % 10;
        temp_num = temp_num / 10;
        rev =  ( rev*10 ) + remainder;
    }  

    printf("Reversed: %d\n", rev);
}
 
