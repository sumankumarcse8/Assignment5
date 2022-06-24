#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the value of principal, rate of interest and time period:");
    scanf("%f%f%f",&p,&r,&t);
    si=((p*r*t)/100);
    printf("Simple Interest=%f",si);
    return(0);
}