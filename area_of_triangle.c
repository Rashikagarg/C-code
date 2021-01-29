// write a program to find the area of triangle.
#include<stdio.h>
int main(int argc, char const *argv[])
{
float h,b,a;
printf("enter the height:");
scanf("%f",&h);
printf("enter the base: ");
scanf("%f",&b);
a=0.5*b*h;
printf("Area of the given is: %6.2f",a);
    return 0;
}
