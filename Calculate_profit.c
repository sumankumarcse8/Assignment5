#include<stdio.h>
#include<conio.h>
int main()
{
    float cp, sp, p, profit_percentage;
    printf("Enter the value of Cost_Price and Selling_Price:");
    scanf("%f%f",&cp,&sp);
    p=(sp-cp);
    profit_percentage=((p/cp)*100);
    printf("profit_percent= %f",profit_percentage);
    return(0);
}