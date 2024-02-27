#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "Data structures and algorithms";
    int i, size, counter;
    
    size = strlen(sentence);
    counter = 0;
    for (i = 0; i < size; i++) {
        if (sentence[i] == 'e') {
            counter++; // counter = counter + 1; or counter += 1;
        }
    }
    printf("\n\nThe number of times the letter e occurs in \"%s\" is %d\n\n",sentence,counter);
}
