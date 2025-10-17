#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("\n 1^2 + 2^2 + 3^2+ . . .  +%d^2\n",num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + pow(i,2);
    }
    printf("\n sum is %d", sum);

    return 0;
}
