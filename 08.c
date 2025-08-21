#include <stdio.h>
int main()
{
    int sub;
    printf("\n Enter student marks: ");
    scanf("%d",&sub);
    
   if(sub >= 33)
   {
        printf("\n Student pass");
   } 
   else
   {
    printf("\n Student fail");
   }

    return 0;
}