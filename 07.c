/*07.Write a c program to prepare pay slip using
following data. Da = 10% of basic, Hra = 7.50%
of basic, Ma = 300, Pf = 12.50% of basic, Gross 
= basic + Da + Hra + Ma, Nt = Gross – Pf*/
#include <stdio.h>
int main()
{
    float basic;
    float Da,Hra,Pf,Ma,Nf,gross_basic;
    printf("Enter basic salary: ");
    scanf("%f",&basic);
    Da=basic * 0.10;
    Ma=300;
    Hra=basic * 0.075;
    gross_basic=Da+basic+Hra+Ma;

    printf("\n Gross Salary: %.2f",gross_basic);
    Pf=basic * 0.125;
    Nf=gross_basic-Pf;
    printf("\n Net salary: %.2f",Nf);
    return 0;
}