#include <stdio.h>
int main()

{
    int num1 , num2;
    printf("Enter first numbers:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    if (num1>num2)
    {
        printf("%d is maximum" , num1);
    }
    else
    {
        printf("%d is minimum", num2);
    }
    
    

    

    return 0;
}
