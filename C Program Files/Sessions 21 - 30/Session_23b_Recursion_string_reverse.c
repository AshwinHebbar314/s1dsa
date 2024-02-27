#include <stdio.h>
#include <string.h>
void reverse_string_recursive(char [],int);

int main() {
    char string[30];
    int length;
    
    printf("\n\nEnter a string: ");
    scanf("%s",string);
    length = strlen(string);
    reverse_string_recursive(string, length-1);
    printf("\n\n");
}

void reverse_string_recursive(char string[], int length) {
    if (length < 0)
        return;
    else {
        printf("%c",string[length]);
        reverse_string_recursive(string,length-1);
    }
}
