#include <stdio.h>

int factorial(int n)
{
    if(n < 0)
        return -1;       // invalid case
    else if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int result = factorial(n);

    if(result == -1)
        printf("Invalid number! Enter positive integer.\n");
    else
        printf("Factorial of %d = %d\n", n, result);

    return 0;
}
