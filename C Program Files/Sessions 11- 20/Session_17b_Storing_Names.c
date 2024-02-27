#include <stdio.h>

int main() {
    char name[20];
    char names[4][20]; // Each name will be of max 20 characters
    int i,m;
    
    m = 4;
    scanf("%s",name);
    printf("%s\n",name);
    
    // Reading 4 names
    printf("\n\nEnter four names, one below the other:\n");
    for (i = 0; i < m; i++) {
        scanf("%s",names[i]);
    }
    printf("\n\nThe names are:\n");
    for (i = 0; i < m; i++) {
        printf("%s\n",names[i]);
    }
    printf("\n\n");
}
