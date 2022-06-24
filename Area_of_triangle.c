#include<stdio.h>
#include<conio.h>
int main()
{
    float Area, b, h;
    printf("Enter the value of breadth and height of triangle:");
    scanf("%f%f",&b,&h);
    Area=((b*h)/2);
    printf("Area_of_Traingle=%f",Area);
    return(0);
}