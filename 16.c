/*
16. Read five person height and weight and 
count the number of person having height 
greater than 170 and weight less than 50. 
*/
#include <stdio.h>
int main()
{
    float height,weight;
    int i,j,person=5;
    int count=0;
    for(i=0;i<person;i++)
    {
        printf("\n Enter Person %d height: ",i+1);
        scanf("%f", &height);
        printf("\n Enter Person %d weight: ",i+1);
        scanf("%f", &weight);
        if(height > 170 && weight < 50)
        {
            count++;
        }
    }
    printf("\n Given persons height & weight data %d persons have height greater than 170 and weight less than 50",count);

    return 0;
}