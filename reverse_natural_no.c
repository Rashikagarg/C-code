// Write a c program to print the reverse of natural number from n to 1.
#include <stdio.h>

int main()
{
    int n;

    
    printf("Print all reverse natural numbers from: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}