// Write a program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter any no.");
    scanf("%d",&num);
    if (num%5==0)
    {
        printf("%d is divisible by 5 and",num);
    }
    else
    {
        printf(" %d is not divisible by 5\n",num);
    }
    if (num%11==0)
    {
      printf(" %d is divisible by 11",num);
    }
    else
    {
        printf(" %d is not divisible by 11",num);
    }
    
    
    
    
    return 0;
}
