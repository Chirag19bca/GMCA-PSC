#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    printf("Enter a string : ");
    gets(str1);
    strrev(str1);
    printf("Reversed string is : %s",str1);
    return 0;
}
