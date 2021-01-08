// Write a program to input any character and check whether it is alphabate,digitor special character.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
  
    printf("Enter any character ");
    scanf("%c", &ch);
    if ((ch >= 'a'&& ch <= 'z') ||(ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a alphabate",ch);
    }
    else if ((ch>='0'&& ch<='9'))
    {
        printf("%c is a digit",ch);
    }
    
    else
    {
        printf("%c is a spacial character",ch);
    }
    
    return 0;
}
