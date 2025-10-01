/*
17. Write a c program to read no 1 to 7 and print 
relatively day Sunday to Saturday.
*/
#include <stdio.h>
int main()
{
    int no;
    printf("Enter No: ");
    scanf("%d",&no);
    switch (no)
    {
    case 1:
        printf("\n day is Sunday");
        break;
    case 2:
        printf("\n day is Monday ");
        break;
    case 3:
        printf("\n day is Tuesday ");
        break;
    case 4:
        printf("\n day is Wednesday ");
        break;
    case 5:
        printf("\n day is Thursday ");
        break;
    case 6:
        printf("\n day is Friday ");
        break;
    case 7:
        printf("\n day is Saturday ");
        break;
    
    default:
        printf("\n Invaild!!");
        break;
    }
    return 0;
}