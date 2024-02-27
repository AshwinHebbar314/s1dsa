#include <string.h>
#include "stack.h"

#define SIZE 100

// Program to match the braces in a C program
// Checks if { and } match
// Does not work for other brackets
int main() {
    STACK *string_stack;
    char string[100];
    char popped_item;
    int i, popped_status, string_size;

    printf("\n\n\tEnter a string that contains braces in any order: ");
    scanf("%s",string);
    
    // Creating a stack of characters
    string_stack = create(string_stack);

    string_size = strlen(string);
    i = 0;
    while (i < string_size) {
        if (string[i] == '{')
            push(string_stack, string[i]);
        else if (string[i] == '}') {
            popped_status = pop(string_stack);
            if (popped_status == '$')
                break;
        }
        i++;
    }

    if (popped_status == '$')
        printf("\tClosing braces are more than opening braces!\n\n");
    else if (isEmpty(string_stack))
        printf("\tBraces match!\n\n");
        else
            printf("\tOpening braces are more than closing braces!\n\n");
}
