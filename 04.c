#include <stdio.h>
int main()
{
    int n1,n2,t;
    printf("\n Enter no1: ");
    scanf("%d",&n1);
    printf("\n Enter no2: ");
    scanf("%d",&n2);
    printf("\n before swapping: ");
    printf("\n no1: %d",n1);
    printf("\n no2: %d",n2);
    
    t=n1;
    n1=n2;
    n2=t;
    printf("\n after swapping: ");
    printf("\n no1: %d",n1);
    printf("\n no2: %d",n2);
    return 0;
}