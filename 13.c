/*13. Write a program to read marks of a student
      from keyboard whether the student is pass
      or fail.(using if else)
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter student marks: ");
    scanf("%d",&marks);
    if(marks>33)
    {
        printf("Student Pass!!");
    }
    else
    {
        printf("Student Fail!!");
    }
    return 0;
}