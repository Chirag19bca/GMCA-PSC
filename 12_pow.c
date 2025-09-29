/*12. (i)Write a program to evaluate the series
            1^2+2^2+3^2+……+n^2
        (ii) Write a program to find
            1/2!+1/3!+1/4!+……+1/n!*/
#include <stdio.h>
#include <math.h>
int main()
{
    int sum,n,i;
    sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum = sum + pow(i,2);
    }
    printf("Sum of series: %d",sum);
    return 0;
}