#include<stdio.h>
#include<conio.h>
int main()
{
    float volume, l, b, h;
    printf("Enter the length, breadth and height of cuboid:");
    scanf("%f%f%f",&l,&b,&h);
    volume=l*b*h;
    printf("Volume of cuboid=%f",volume);
    return(0);
}