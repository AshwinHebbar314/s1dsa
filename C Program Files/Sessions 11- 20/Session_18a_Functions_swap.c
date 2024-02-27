#include <stdio.h>
// Illustrating the use of functions

void swap(int x, int y) {
    int temp;
    printf("From swap: Before swapping: x = %d\ty=%d\n\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("From swap: After swapping: x = %d\ty=%d\n\n",x,y);
}

int main() {
    int x,y;
    printf("\n\n\tEnter two integers:\n");
    scanf("%d %d",&x,&y);
    printf("From main: Before swapping: x = %d\ty=%d\n\n",x,y);
    swap(x,y);
    printf("From main: After swapping: x = %d\ty=%d\n\n",x,y);
}
