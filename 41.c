#include <stdio.h>

int main()
{
    int n1 = 10, n2 = 20;
    int *a = &n1, *b = &n2 ,*temp;

    printf("Before swapping:\n");
    printf("a: %d, b: %d\n", *a, *b);

    *temp = *a;
    *a = *b;
    *b = *temp;

    printf("Before swapping:\n");
    printf("a: %d, b: %d\n", *a, *b);

    return 0;
}