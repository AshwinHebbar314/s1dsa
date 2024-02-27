#include <stdio.h>
// Illustrating the use of functions

int main() {
    int p,*q,*r;
    
    p = 10; // p is a normal integer variable
    printf("\n\tp holds the value %d\n\n",p);
    printf("\tp's address is %p\n\n",&p);
    
    q = &p;
    printf("\n\tq holds the value %d\n\n",*q);
    
    r = q;
    printf("\n\tr holds the value %d\n\n",*r);
}
