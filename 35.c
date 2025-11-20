#include <stdio.h>
#include <string.h>
void Toupper(char str[])
{
    printf("%s", strupr(str));
}
int main()
{
    char str[100];
    printf("\n enter string: ");
    gets(str);
    Toupper(str);
    return 0;
}