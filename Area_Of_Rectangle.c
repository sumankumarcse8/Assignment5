#include<stdio.h>
#include<conio.h>
int main()
{
    float Area_of_rectangle, l, b;
    printf("Enter the value of length and breadth:");
    scanf("%f%f",&l,&b);
    Area_of_rectangle=l*b;
    printf("Area_of_rectangle=%f",Area_of_rectangle);
    return(0);
}