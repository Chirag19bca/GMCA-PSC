#include <stdio.h>
int main()
{
    int no;
    printf("\n Enter No: ");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n %d number is Positive.",no);
    }
    else if(no<0)
    {
        printf("\n %d number is Negative.",no);
    }
    else
    {
        printf("\n %d number is Zero.",no);
    }
    return 0;
}