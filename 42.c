#include <stdio.h>

int main()
{
    char my_string[] = "Hello C!";

    char *ptr = my_string;

    printf("--- String Character and Address Printer ---\n\n");
    printf("String: \"%s\"\n\n", my_string);
    printf("--- Output --- \n");

    while (*ptr != '\0')
    {
        printf("Address: %p | Character: '%c'\n", (void *)ptr, *ptr);

        ptr++;
    }

    printf("Address: %p | Character: '\\0' (Null Terminator)\n", (void *)ptr);

    return 0;
}