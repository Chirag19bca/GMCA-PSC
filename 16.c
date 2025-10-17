#include <stdio.h>
int main()
{
    int num,temp,rev=0;
    int digit;
    printf("Enter Number : ");
    scanf("%d", &num);
    temp=num;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    printf("\n%d Reverse is %d",num,rev);
    return 0;
}
