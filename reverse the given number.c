// Write a c program to reverse the given number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rem,n;
    printf("Enter the no. ");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        printf("The reverse num is : %d",rem);
        n=n/10;
    }
    
    return 0;
}
