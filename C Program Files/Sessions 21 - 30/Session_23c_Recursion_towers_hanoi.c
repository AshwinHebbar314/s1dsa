#include <stdio.h>
#include <string.h>
void towers_of_hanoi(int,char,char,char);

int main() {
    int n;
    
    printf("\n\nEnter an integer: ");
    scanf("%d",&n);
    towers_of_hanoi(n,'A','B','C');
    printf("\n\n");
}

void towers_of_hanoi(int n,char from, char to, char spare){
    if (n == 0)
        return;
    towers_of_hanoi(n-1,from,spare,to);
    printf("Disk moved from %c to %c\n\n",from,to);
    towers_of_hanoi(n-1,spare,to,from);
}
