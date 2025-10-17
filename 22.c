#include <stdio.h>

int main()
{
    int num;
    float fact = 1,sum = 1.0;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("\n 1+1/2!+1/3!+1/4!+ ... +1/%d!",num);
    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
        sum += 1/fact;
    }
    printf(" sum is %f", sum);

    return 0;
}
 