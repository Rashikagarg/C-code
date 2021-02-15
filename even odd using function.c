// Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
int even(int num);
int main(int argc, char const *argv[])
{
    int  num;
    printf("enter number to check even odd: ");
    scanf("%d",&num);
   if(even(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
int even(int num)
{
   
    return !(num & 1);
}