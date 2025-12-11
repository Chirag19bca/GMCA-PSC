#include <stdio.h>
int main() {
    int data_array[] = {10, 20, 30, 40, 50};
    int size = sizeof(data_array) / sizeof(data_array[0]);

    int *ptr = data_array;

    printf("--- Array Access using Pointers Demonstration ---\n\n");

    printf("Accessing elements using standard array indexing (array[i]):\n");
    for (int i = 0; i < size; i++) {
        printf("  Element %d (Index %d): %d\n", i + 1, i, data_array[i]);
    }

    printf("\n");
    
    printf("Accessing elements using pointer arithmetic (*(ptr + i)):\n");
    for (int i = 0; i < size; i++) {
        printf("  Element %d (Offset %d): %d\n", i + 1, i, *(ptr + i));
    }

    printf("\n--- Comparison of Addresses ---\n");
    printf("Address of data_array[2] (&data_array[2]): %p\n", &data_array[2]);
    printf("Address of (ptr + 2): %p\n", (ptr + 2));
    

    return 0;
}