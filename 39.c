#include<stdio.h>
struct student
{
    char name[50];
    char branch[50];
    int total;
};

int main()
{
    int n;
    printf("How many student data you want to store: ");
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("\nEnter details of Student %d\n",i+1);
        printf("Enter Student Name: ");
        scanf("%s",s1[i].name);
        printf("Enter Student Branch: ");
        scanf("%s",s1[i].branch);
        do
        {
            printf("Enter Student Total Marks: ");
            scanf("%d",&s1[i].total);
            if(s1[i].total > 700)
            {
                printf("Invalid Total Marks, Please enter valid marks\n");
            }
        } while (s1[i].total > 700);
           
    }

    for(int i=0 ; i<n ; i++)
    {
        printf("\nStudent %d Details\n",i+1);
        printf("Name: %s\n",s1[i].name);
        printf("Branch: %s\n",s1[i].branch);
        printf("Total Marks: %d\n",s1[i].total);
    }
    return 0;
}