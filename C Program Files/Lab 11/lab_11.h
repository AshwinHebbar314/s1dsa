#include <stdio.h>
#include <string.h>

# define N 200
# define LENGTH 100
# define ITEMS 5

typedef struct product_info {
    int product_id;
    char product_name[LENGTH];
    float price;
    float cost;
    float margin;
} PRODUCT_INFO;

int read_product_data(PRODUCT_INFO products[],int size) {
    FILE *fp;
    int i,j;
    char data[LENGTH], *token, product_data[ITEMS][LENGTH];
    
    // Opening the file for reading
    fp = fopen("sales_data_small.txt","r");
    if(fp == NULL)
        printf("Error opening file.\n");
    else
    {
        // Reading data from the file
        i = 0;
        do
        {
            fgets(data,LENGTH,fp); // Reading a row into data
            if (!feof(fp))
                data[strlen(data)-1] = '\0'; // Adding a null character to the end of the string as fgets adds a newline character
            // printf("%s\n",data);
            token = strtok(data,","); // Breaking the line into tokens as each row has multiple data items separated by a comma
            j = 0;
            while (token != NULL) {
                // printf("%s\n",tokens);
                // Adding data into the array of structures
                strcpy(product_data[j],token);
                token = strtok(NULL, ",");
                j++;
            }
            products[i].product_id = atoi(product_data[0]);
            strcpy(products[i].product_name,product_data[1]);
            products[i].price = atof(product_data[2]);
            products[i].cost = atof(product_data[3]);
            products[i].margin = atof(product_data[4]);
            i++;
        } while(!feof(fp));
        
        fclose(fp);
    }
    return i - 1; // Number of data items read
}

// Display product details
void display_products(PRODUCT_INFO products[], int size) {
    int i;
    
    for (i = 1; i < size; i++) {
        printf("%d\t%s\t%f\t%f\t%f\n",products[i].product_id,products[i].product_name,products[i].price,products[i].cost,products[i].margin);
    }
}

// Sort the data
void sort_products(PRODUCT_INFO products[], int size, int column) {
    
    // TO DO
}
