//11.Write a program to check whether the given number is prime or not.
#include <stdio.h>
int main()
{
    int no,i;
    int flag=0;
    printf("Enter No: ");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("given No %d is Prime number",no);
    }
    else
    {
        printf("given No %d is Not Prime number",no);
    }


    return 0;
}