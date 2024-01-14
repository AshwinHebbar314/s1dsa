// 3.	Write a C program that creates a structure called number. This has three members – an integer number, whether it is odd or even and whether it is a prime number or not. Write two functions, one that finds if the number is either or even, and another function whether the integer is a prime number or not. A prime number is a number that is only divisible by 1 and itself. In the main program, print the integer and whether it is even or odd and whether it is a prime number or not. For instance, 21 is an odd number and is not a prime number whereas 13 is an odd number and is a prime number.

#include <stdio.h>

struct number {
    int num;
    int is_even;
    int is_prime;
};

void is_even(struct number *n) {
    if(n->num % 2 == 0) {
        n->is_even = 1;
    } else {
        n->is_even = 0;
    }
}

void is_prime(struct number *n) {
    int is_prime = 1;
    for(int i = 2; i < n->num; i++) {
        if(n->num % i == 0) {
            is_prime = 0;
            break;
        }
    }
    n->is_prime = is_prime;
}
int main() {
    struct number n;
    printf("Enter a number: ");
    scanf("%d", &n.num);

    is_even(&n);
    is_prime(&n);

    if(n.is_even) {
        printf("%d is even\n", n.num);
    } else {
        printf("%d is odd\n", n.num);
    }

    if(n.is_prime) {
        printf("%d is prime\n", n.num);
    } else {
        printf("%d is not prime\n", n.num);
    }

    printf("The number is %d\n", n.num);
}
