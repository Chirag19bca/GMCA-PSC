/*12. (i)Write a program to evaluate the series
            1^2+2^2+3^2+……+n^2
        (ii) Write a program to find
            1/2!+1/3!+1/4!+……+1/n!*/
#include <stdio.h>
int main()
{
    float fact,n,i,sum=0;
    fact=1;
    printf("Enter number: ");
    scanf("%f",&n);
   for(i=1;i<=n;i++)
   {
        fact=fact * i;
        sum=sum + (1/fact);
   }
    printf("Sum of factorial series: %.2f",sum);
    return 0;
}