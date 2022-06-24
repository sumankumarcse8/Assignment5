#include<stdio.h>
#include<conio.h>
int main()
{
    float area, pi=22/7, r;
    printf("Enter the value of radius:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of circle=%f",area); 
}