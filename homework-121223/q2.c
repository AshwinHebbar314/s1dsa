// 2.	Write a C program that takes an English word as input and displays the number of vowels in the word. Write a function called count_vowels that finds the number of vowels in the input string. For instance, if the input string is program, the output will display that the string has 2 vowels, and if the input word is myth, the output will display that the string has no vowels.

#include <stdio.h>

int main() {
    char word[100];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for(int i = 0; word[i] != '\0'; i++) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o'|| word[i] == 'u') {
            count++;
        }
    }

    printf("The word %s has %d vowel(s)\n", word, count);
}