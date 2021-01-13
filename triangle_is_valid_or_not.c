// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ang1,ang2,ang3,sum;
    printf("Enter three angle of Triangle:\n");
    scanf("%d%d%d",&ang1, &ang2, &ang3);
    sum=ang1+ang2+ang3;
    if (sum==180 && ang1>0 && ang2>0 && ang3>0)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    
    
    return 0;
}
