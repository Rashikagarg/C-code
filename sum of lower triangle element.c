#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,m,a[5][5],sum=0;
    printf("Enter the order of matrix: ");
    scanf("%d",&m);
    printf("Enter element ");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < m; j++)
       {
          scanf("%d",&a[i][j]);
       }
       
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(i>=j)
            sum=sum+a[i][j];
        }
        
    }
    printf("Sum of lower triangular element : %d",sum);
    
    return 0;
}