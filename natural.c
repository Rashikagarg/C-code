// Write a program to print all natural number from 1 to n
#include<stdio.h>
int main()
{
    int no ,i=1;
    printf("Print all natural numbers from :");
    scanf("%d",&no);
    while (i<no)
    {
       printf("%d\n",i);
       i++;
    }
    
    
    return 0;
}
