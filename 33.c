/*
33. Write a function in the program to return 1 if number is
prime otherwise return 0,
*/
#include <stdio.h>
int prime(int no)
{
    int flag = 0;
    for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int no;
    printf("Enter No: ");
    scanf("%d",&no);
    printf("%d",prime(no));
    return 0;
}