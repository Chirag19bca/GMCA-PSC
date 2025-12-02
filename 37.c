/*
37. Define a structure type struct personal that would contain
person name, joining date and salary using this structure to
read this information of 5 people and print the same on
screen 
*/
#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
};

struct personal
{
    char name[50];
    int salary;
    struct date joinDate;
};


int main()
{
    int n;
    printf("How many Employee Details you want to store\n");
    scanf("%d",&n);
    struct personal p1[n];
    
    for(int i=0; i<n; i++)
    {
        printf("\nEnter details of Employee %d\n",i+1);
        printf("Enter Employee Name: ");
        scanf("%s",p1[i].name);

        do // Run at least once
        {
            printf("Enter Employee Join Date (DD MM YYYY): ");
            scanf("%d %d %d",&p1[i].joinDate.date, &p1[i].joinDate.month, &p1[i].joinDate.year);

            if(p1[i].joinDate.date < 1 || p1[i].joinDate.date > 31 || p1[i].joinDate.month < 1 ||
                p1[i].joinDate.month > 12 || p1[i].joinDate.year < 1900)
            {
                printf("Invalid Join Date, Please enter a valid date\n");
            }
            // The loop continues as long as the date is invalid (condition is true)
        }while(p1[i].joinDate.date < 1 || p1[i].joinDate.date > 31 || p1[i].joinDate.month < 1 
               || p1[i].joinDate.month > 12 || p1[i].joinDate.year < 1900);

        // Program only proceeds to salary once a valid date is entered.
        printf("Enter Employee Salary: ");
        scanf("%d",&p1[i].salary);
    }
    
    printf("\n\nEmployee Details are:\n");
    for(int i=0; i<n; i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Name: %s\n",p1[i].name);
        printf("Join Date: %d %d %d\n",p1[i].joinDate.date, p1[i].joinDate.month, p1[i].joinDate.year);
        printf("Salary: %d\n",p1[i].salary);
    }
    return 0;
}