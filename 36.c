#include <stdio.h>
struct student
{
    int Rollno;
    char Name[100];
};
int main()
{
    struct student s1;
    printf("Enter Student RollNo: ");
    scanf("%d",&s1.Rollno);
    printf("Enter Student Name: ");
    scanf("%s",s1.Name);
    printf("Student RollNo: %d \n",s1.Rollno);
    printf("Student Name: %s",s1.Name);
    return 0;
}