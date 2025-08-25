#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter character: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n character is capital letter.");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n character is small letter.");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n character is digit.");
        
    }
    else
    {
        printf("\n character is special character.");
    }
    
    return 0;
}
