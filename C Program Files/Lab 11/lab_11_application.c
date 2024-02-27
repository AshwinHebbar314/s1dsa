#include <stdlib.h>
#include <string.h>
#include "lab_11.h"

int main() {
    PRODUCT_INFO products[N];
    int number_items;
    
    number_items = read_product_data(products,N);
    display_products(products,number_items);
    sort_products(products,number_items,0); // Third argument indicates which column should be used for sorting
    display_products(products,number_items);
    return 1;
}
