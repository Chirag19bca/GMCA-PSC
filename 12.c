#include <stdio.h>
#include <math.h>
int main()
{
    int sum,n,i;
    sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        sum=sum + pow(i,2);
    }
    printf("Sum of series: %d",sum);
    return 0;
}