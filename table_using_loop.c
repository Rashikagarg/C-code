#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , num;
    printf("enter the no. to print the table:\n");
    scanf("%d",&num);
    printf("The table of %d\n",num);
    for ( i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n" ,num ,i, num*i);
    }
    
    return 0;
}
