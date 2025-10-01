/*
15. Write a program to calculate average and
total of 5 students for 3 subjects(use nested
for loops).
*/
#include <stdio.h>
int main()
{
    int i, j, total = 0;
    float avg = 0;
    int marks[5][3];
    for (i = 0; i < 5; i++)
    {
        printf("\n -: Enter Student %d marks :-", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter Subject %d marks: ", j + 1);
            scanf("%d", &marks[i][j]);
            total = total + marks[i][j];
        }
        avg = total / 3;

        printf("\n total: %d", total);
        printf("\n avrage: %.2f", avg);
        total=0;
        avg=0;
    }
    return 0;
}