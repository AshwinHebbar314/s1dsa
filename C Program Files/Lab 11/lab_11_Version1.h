#include <stdio.h>
#include <string.h>

# define N 200
# define LENGTH 100
# define ITEMS 5
# define ITEM_LENGTH 20

typedef struct product_info {
    int product_id;
    char product_name[LENGTH];
    float price;
    float cost;
    float margin;
} PRODUCT_INFO;

char column_names[ITEMS][ITEM_LENGTH];

int read_product_data(PRODUCT_INFO products[],int size, char filename[]) {
    FILE *fp;
    int i,j;
    char data[LENGTH], *token, product_data[ITEMS][LENGTH];
    
    // Opening the file for reading
    fp = fopen(filename,"r");
    if(fp == NULL)
        printf("Error opening file.\n");
    else
    {
        // Reading data from the file
        fgets(data,LENGTH,fp); // To ignore the header row
        i = 0;
        do
        {
            fgets(data,LENGTH,fp); // Reading from second row in the file as that is where the records start
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
    return i; // Number of data items read
}

// Display product details
void display_products(PRODUCT_INFO products[], int size) {
    int i,j,longest,length;
    
    // Finding the longest name to format the display well
    longest = 0;
    for (i = 0; i < size; i++) {
        if (strlen(products[i].product_name) > longest)
            longest = strlen(products[i].product_name);
    }
    
    length = strlen(products[i].product_name);
    // Displaying the product information
    // Displaying the column titles
    printf("\t%s\t%s",column_names[0],column_names[1]);
    for (j = 0; j < longest - length + 2; j++)
        printf(" ");
    printf("%s\t%s\t%s\n",column_names[2],column_names[3],column_names[4]);
    for (i = 0; i < size; i++) {
        printf("\t%d\t%s",products[i].product_id,products[i].product_name);
        length = strlen(products[i].product_name);
        for (j = 0; j < longest - length + 2; j++)
            printf(" ");
        printf("%f\t%f\t%f\n",products[i].price,products[i].cost,products[i].margin);
    }
}

void sort_on_product_id(PRODUCT_INFO products[], int size) {
    int i,j;
    PRODUCT_INFO temp;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            if (products[j].product_id > products[j+1].product_id) {
                temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
}

void sort_on_product_name(PRODUCT_INFO products[], int size) {
    int i,j;
    PRODUCT_INFO temp;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            if (strcmp(products[j].product_name,products[j+1].product_name) > 0) {
                temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
}
                        
void sort_on_price(PRODUCT_INFO products[], int size) {
    int i,j;
    PRODUCT_INFO temp;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            if (products[j].price > products[j+1].price) {
                temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
}

void sort_on_cost(PRODUCT_INFO products[], int size) {
    int i,j;
    PRODUCT_INFO temp;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            if (products[j].cost > products[j+1].cost) {
                temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
}

void sort_on_margin(PRODUCT_INFO products[], int size) {
    int i,j;
    PRODUCT_INFO temp;
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size-1; j++) {
            if (products[j].margin > products[j+1].margin) {
                temp = products[j];
                products[j] = products[j+1];
                products[j+1] = temp;
            }
        }
    }
}

// Sorts the products
void sort_products(PRODUCT_INFO products[], int size, int column) {
    
    switch (column) {
        case 0: sort_on_product_id(products,size);
                display_products(products,size);
                break;
        case 1: sort_on_product_name(products,size);
                display_products(products,size);
                break;
        case 2: sort_on_price(products,size);
                display_products(products,size);
                break;
        case 3: sort_on_cost(products,size);
                display_products(products,size);
                break;
        case 4: sort_on_margin(products,size);
                display_products(products,size);
                break;
        default: printf("\nIncorrect column value!\n");
    }
}
