// Write a c program to print array element.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,i,r[10];
    printf("Enter the number: ");
    scanf("%d",&no);
    printf("Enter array elements: \n");
    for ( i = 0; i < no; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&r[i]);

    }
    for ( i = no-1; i>=0; i--)
    {
        printf("\n Element %d = %d",i+1,r[i]);
    }
    
    

    return 0;
}
