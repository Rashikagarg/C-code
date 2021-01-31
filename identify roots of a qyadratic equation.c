// Write a c program to identify root of a quadratic equation.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float x,r1,r2,a,b,c;
    printf("Enter a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    x=(b*b)-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
    printf("\nRoots are unequal \n");
    else if (x<0)
    {
        printf("\n Roots are imaginary \n");
    }
    else
    {
        printf("R1 = %f",r1);
        printf("R2 = %f",r2);
    }
    
    
    return 0;
}
