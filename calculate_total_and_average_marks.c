// Write a c program to calculate total and average of marks.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int roll_no,m1,m2,m3,total;
    float average;
    printf("Enter roll no: ");
    scanf("%d",&roll_no);
    printf("Enter marks 1:");
    scanf("%d",&m1);
    printf("Enter marks 2:");
    scanf("%d",&m2);
    printf("Enter marks 3:");
    scanf("%d",&m3);
    total=m1+m2+m3;
    average=total/3.0;
    printf("\n Student roll no.: %d",roll_no);
    printf("\n Marks1:%d",m1);
    printf("\n Marks2: %d",m2);
    printf("\n Marks3:%d",m3);
    printf("Total: %d",total);
    printf("\nAverage: %f",average);

    return 0;
}
