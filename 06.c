#include <stdio.h>
int main()
{
    float c,f;
    printf("\n Enter centigrade: ");
    scanf("%f",&c);

    printf("\n Fahrenheit from centigrade: %f ",(f=1.8*c+32));
    return 0;
}