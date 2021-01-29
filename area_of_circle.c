// write a c program to calculate the area of circle.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r,a;
    printf("Enter the radious : ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area of the given is: %6.2f",a);


    return 0;
}
