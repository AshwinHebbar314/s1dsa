#include "stack.h"

#define STRINGSIZE 60

// Program to reverse a string
int main() {
    STACK *string_stack;
    char string[STRINGSIZE] ="was it a car or a cat I saw";
    char poppedItem;
    int i;

    // Creating a stack of characters
    string_stack = create(string_stack);

    for (i = 0; i < STRINGSIZE; i++)
        push(string_stack,string[i]);

    printf("\n\tItem at top of stack, after pushing characters, is %c\n",topOfStack(string_stack));

    printf("\n\tOriginal string is: %s\n", string);

    printf("\n\tReversed string is: ");
    while ((poppedItem = pop(string_stack)) != '$')
        printf("%c",poppedItem);
    
    printf("\n");

    printf("\n\tStack is now empty!\n\n");
}
