// Write a c program to calculate the simple interest.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float si,p,n,r;
    printf("Enter the value of P, N, R: ");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("The simple interest = %6.2f",si);
    
    return 0;
}
