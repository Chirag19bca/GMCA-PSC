#include <stdio.h>
float factorial(float n)
{
    if(n <= 0)
    {
        printf("\n INVAILD NUMBER it's should be positive number");
        return 0;
    }
    else
    {
        return n*factorial(n-1);
    }
}
float main()
{
    float n;
    printf("Enter Number: ");
    scanf("%f",&n);
    printf("\n factorial of %.2f: %.2f",n,factorial(n));
    return 0;
}