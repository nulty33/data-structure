/*
 * Purpose: Displaying elements of an array.
 * Programmer: Dickens Odhiambo
 * AdmNo: BSE-05-0206/2024
 * Date: June 22, 2025
 */

#include <stdio.h>

// display - Printing all elements of the array.
 
void display(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Entry point to demonstrate display function.
 
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    display(arr, size);
    return 0;
}