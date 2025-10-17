#include <stdio.h>
int main()
{
    int i, j, total = 0;
    float avg = 0;
    int marks[5][3];
    for (i = 0; i < 5; i++)
    {
        printf("\n -: Enter Student %d marks :-\n ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("Enter Subject %d marks: ", j + 1);
            scanf("%d", &marks[i][j]);
            total = total + marks[i][j];
        }
        avg = total / 3;

        printf("\n total: %d", total);
        printf("\n avrage: %.2f \n ", avg);
        total=0;
        avg=0;
    }
    return 0;
}
