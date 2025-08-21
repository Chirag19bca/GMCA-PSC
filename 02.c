#include <stdio.h>
int main()
{
    float h,b,a;
    printf("\n Enter height: ");
    scanf("%f",&h);
    printf("\n Enter Base: ");
    scanf("%f",&b);

    a=(h*b*.5);

    printf("\n area of triangle: %f",a);
    
    return 0;
}