#include <stdio.h>
#include <string.h>

#define N 500
#define HEX_SIZE 7

int read_data(char hex_codes[N][HEX_SIZE], char file_name[]) {
    FILE *fp;
    int i;
    char hex_code[HEX_SIZE];
    
    i = 0;
    fp = fopen(file_name,"r");
    if (fp == NULL)
        printf("\nError opening file\n");
    else {
        // Checking for empty by going to the end of the file
        fseek(fp, 0, SEEK_END);
        if (ftell(fp) == 0)
            printf("\nFile is empty!\n");
        else {
            // Getting back to the beginning of the file
            fseek(fp, 0, SEEK_SET);
            // Reading data from the file
            do {
                fscanf(fp, "%s", hex_code);
                strcpy(hex_codes[i],hex_code);
                i++;
            } while (!feof(fp));
        }
    }
    fclose(fp);
    return i;
}

// Main program that tests all sorting functions
int main() {
    char hex_codes[N][HEX_SIZE]; // Hex codes are 6 characters long
    int size;
    
    // Calling read_data to read the hex codes from a file into the array hex_codes
    size = read_data(hex_codes,"hex_codes.txt");
}
