#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\n Enter no1: ");
    scanf("%d",&n1);
    printf("\n Enter no2: ");
    scanf("%d",&n2);
    printf("\n Enter no3: ");
    scanf("%d",&n3);

    if(n1>n3)
    {
        if(n1>n2)
        {
            printf("\n %d is maximum out of these three.",n1);
        }
        else
        {
            printf("\n %d is maximum out of these three.",n2);

        }
    }
    else
    {
        if(n2>n3)
        {
            printf("\n %d is maximum out of these three.",n2);
        }
        else
        {
            printf("\n %d is maximum out of these three.",n3);

        }
        
    }
    return 0;
}