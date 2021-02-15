#include<stdio.h>
int main()
{
    int no,a[20],i,max,min; 
    printf("Enter the number: ");
    scanf("%d",&no);
    printf("Enter the element:\n ");
    for(i=0;i<no;i++)
    {
        printf("\nEnter element %d ",i+1);
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<no;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];

    }
    printf("\n Min : %d",min);
    printf("\n Max : %d",max);
    return 0;
}