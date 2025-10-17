#include <stdio.h>
int main()
{
    int no;
    printf("Enter marks: ");
    scanf("%d",&no);
    if(no>=80 || no == 100)
    {
        printf("Distinction!");
    }
    else if(no>=60 || no == 79)
    {
        printf("First class");
    }
    else if(no>=40 || no == 59)
    {
        printf("Second class");
    }
    else
    {
        printf("Fail!!");
    }
    return 0;
}
