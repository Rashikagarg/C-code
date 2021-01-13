// Write a program to inpur all sides of triangle and check whether triangle is valid or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int side1,side2,side3;
    printf("Enter the three side of Triangle:");
    scanf("%d%d%d", &side1,&side2,&side3);
    if(side1<side2+side3 && side2<side1+side3 &&side3<side1+side2)
    {
        printf("The Triengle is valid");
    }
    else
    {
        printf("The Triangle is not valid");
    }
    
    return 0;
}
