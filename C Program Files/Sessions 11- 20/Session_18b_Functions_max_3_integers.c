#include <stdio.h>
// Illustrating the use of functions
int max_3_integers(int, int, int); // Function prototype or declaration

int main() {
    int x,y,z,max;
    printf("\n\nEnter three integers:\n");
    scanf("%d %d %d",&x,&y,&z);
    max = max_3_integers(x,y,z);
    printf("The maximum of three input integers - %d, %d and %d is %d\n",x,y,z,max);
}

int max_3_integers(int x, int y, int z) { // Function definition
    if (x > y && x > z) {
        return x;
    }
    if (y > x && y > z) {
        return y;
    }
    else {
        return z;
    }
}
