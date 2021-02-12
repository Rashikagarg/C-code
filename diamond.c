// Write a c program to print diamond shape.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,i,j,k;
    printf("Enter the number:");
    scanf("%d",&no);
    for ( i = 1; i <= no; i++)
    {
        for ( k=1; k<=( no-i); k++)
        {
            printf(" ");
        }
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
    
        for ( j = 2; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for ( i = no-1; i>=1; i--)
    {
       for ( k = 1; k<=(no-i); k++)
       {
           printf(" ");
       }
      for ( j = 1; j <= i; j++)
      {
       printf("*");
      }
      for ( j = 2; j <=i; j++)
      {
         printf("*");
      }
      
      printf("\n");
    }
    
    return 0;
}
