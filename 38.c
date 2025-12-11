#include<stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct time_struct t1;
    do
    {
        printf("Enter Time (HH MM SS): ");
        scanf("%d %d %d",&t1.hour, &t1.minute, &t1.second);
        if(t1.hour < 1 || t1.hour > 24 || t1.minute < 1 ||
                t1.minute > 60 || t1.second <1 || t1.second >60)
        {
                printf("Invalid Time Format , Please Enter a valid Time\n");
        }    
    } while (t1.hour < 1 || t1.hour > 24 || t1.minute < 1 ||
                t1.minute > 60 || t1.second <1 || t1.second >60);
    
    // Specifies the flag for padding. If the number requires fewer than 2 characters
    // (i.e., it's a single digit like 1, 5, or 9), it will be padded on the left with a zero (0).
    printf("\n\nTime Entered: %02d:%02d:%02d \n",t1.hour, t1.minute, t1.second); 
    
    return 0;
}