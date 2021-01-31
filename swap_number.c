// Write a c program to swap two number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,temp;
    printf("Enter first and second number: ");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping: %d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping: %d %d",a,b);
    return 0;
}
