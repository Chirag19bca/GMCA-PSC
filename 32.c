#include <stdio.h>
int sumofN(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int no;
    int sum;
    printf("Enter Number: ");
    scanf("%d",&no);
    sum=sumofN(no);
    printf("Sum of first %d Numbers:%d",no,sum);
    return 0;
}