// write a c program to find the square and cube.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,s,c;
    printf("Enter no: ");
    scanf("%d",&no);
    s=no*no;
    c=no*no*no;
    printf("Square is: %d",s);
    printf("\nCube is: %d",c);
    return 0;
}
