#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter limit for Fibonnaci : ");
    scanf("%d", &num);
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonnaci Series : \n");
    while (i <= num)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
    
    return 0;
}
