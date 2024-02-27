#include <stdio.h>
int factorial_recursive(int);

int main() {
    int n;
    
    printf("\n\nEnter an integer: ");
    scanf("%d",&n);
    printf("\nThe factorial of %d is %d\n\n",n,factorial_recursive(n));
}

int factorial_recursive(int n) {
    
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial_recursive(n-1);
    }
}
