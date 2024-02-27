#include <stdlib.h>
#include <string.h>
#include "lab_11_Version1.h"

// Global variable for column names to be accessed by all functions relevant to the application

int main() {
    PRODUCT_INFO products[N];
    int number_items, which_col;
    char filename[30];
    
    // Storing the names of the column for display and printing
    strcpy(column_names[0],"Product ID");
    strcpy(column_names[1],"Product Name");
    strcpy(column_names[2],"Price");
    strcpy(column_names[3],"Cost");
    strcpy(column_names[4],"Margin");
    
    // Name of the file containing the data
    strcpy(filename,"sales_data_large.txt");
    
    // Reads the data from the file and returns number of items read
    number_items = read_product_data(products,N,filename);
    
    printf("\nBefore sorting:\n");
    display_products(products,number_items);
    printf("\n");
    
    // Calling the sort function to sort by the chosen column
    for (which_col = 0; which_col < ITEMS; which_col++) {
        printf("\nSorted on the column %d: %s\n",which_col,column_names[which_col]);
        sort_products(products,number_items,which_col); // Third argument indicates which column should be used for sorting
    }
    printf("\n");
    return 1;
}
