#include <stdio.h>
int main()
{
    float km;
    printf("\n Enter kilometre: ");
    scanf("%f",&km); 
    printf("\n kilometre into meter: %.2f",(km * 1000));
    printf("\n kilometre into feet: %.2f",(km * 3280.84));
    printf("\n kilometre into inches: %.2f",(km * 39370.1));
    printf("\n kilometre into centimetre: %.2f",(km * 100000));
    return 0;
}