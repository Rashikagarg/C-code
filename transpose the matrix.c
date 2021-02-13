#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n,i,j,a[5][5];
    printf("Enter the order of matrix : ");
    scanf("%d%d",&m,&n);
    printf("Enter element: ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      for ( i = 0; i < m; i++)
      {
          for ( j = 0; j < n; j++)
          {
            printf(" %d ",a[j][i]);
            
          }
          printf("\n");
          
      }
        
    
    
    
    return 0;
}
