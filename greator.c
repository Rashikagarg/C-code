#include<stdio.h>
int main()
{
    /* code */
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("/n Enter the value of b:");
    scanf("%d",&b);
    printf("/n Enter the value of c:");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        /* code */
        printf("a is greater than b and c");
    }
    else if (b>c && b>a)
    {
        /* code */
        printf("b is greater than a and c");
    }
    else
    {
        printf("c is greater than b and a");
    }
    
    
    return 0;
}
