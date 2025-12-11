#include <stdio.h>

int main()
{
    int number = 65;
    int *ptr;
    ptr = &number;
    // The %p format specifier is used for printing addresses (pointers)
    printf("Address of number: %p\n", &number);

    // The dereference operator (*) retrieves the value stored at the address held by 'ptr'.
    printf("\nValue of 'number' (*ptr): %d\n", *ptr);

    // Every variable, including the pointer 'ptr' itself, has a memory address.
    printf("\nAddress of the pointer 'ptr' (&ptr): %p\n", &ptr);

    return 0;
}