// Write a C program to check whether a Character is uppercase or lowercase.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    printf("Enter any chracter:");
    scanf("%c",&ch);
    if(ch=='a'&& ch<='z')
    {
        printf("Character is lowercase");
    }
    else
    {
        printf("Chracter is Uppercase");
    }
    
    return 0;
}
 