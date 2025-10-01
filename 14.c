/*14. Write a program to read three numbers from
      keyboard and find out maximum out of
      three.(nested if else)
*/
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("\n Enter No1: ");
    scanf("%d", &n1);
    printf("\n Enter No2: ");
    scanf("%d", &n2);
    printf("\n Enter No3: ");
    scanf("%d", &n3);
    if (n1 > n3)
    {
        if (n1 > n2)
        {
            printf("given number %d is max out of three numbers.", n1);
        }
        else
        {
            printf("given number %d is max out of three numbers.", n2);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf("given number %d is max out of three numbers.", n2);
        }
        else
        {
            printf("given number %d is max out of three numbers.", n3);
        }
    }
    return 0;
}