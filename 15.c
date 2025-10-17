#include <stdio.h>
int main()
{
    int num,fact = 1;
    printf("\n Enter Number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("%d Factorial is %d",num,fact);

    return 0;
}
