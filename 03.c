#include <stdio.h>
int main()
{
    float p,i,r,n;
    printf("\n Enter  Principal amount: ");
    scanf("%f",&p);
    printf("\n Enter Rate of interest ");
    scanf("%f",&r);
    printf("\n Enter Number of years: ");
    scanf("%f",&n);
    
    i=(p*r*n)/100;

    printf("\n Simple interest: %f",i);
    return 0;
}