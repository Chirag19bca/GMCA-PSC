/*
18. Write  a  program  to  read  marks  from 
   keyboard and your program should display 
   grade according to following table (if else 
   ladder) 
   Marks Grade 
   100-80 Distinction 
   79-60 First 
   59-40 Second 
   <40 fail */
#include <stdio.h>
int main()
{
    int no;
    printf("Enter marks: ");
    scanf("%d",&no);
    if(no>=80 || no == 100)
    {
        printf("DIstinction!");
    }
    else if(no>=60 || no == 79)
    {
        printf("First");
    }
    else if(no>=40 || no == 59)
    {
        printf("Second");
    }
    else
    {
        printf("Fail!!");
    }
    
    return 0;
}