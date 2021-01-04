#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,num,r,s=0;
    printf("Enter any no.:");
    scanf("%d",&no);
    num=no;
    while(no!=0)
    {
        r=no%10;
        s=s+(r*r*r);
        no=no/10;
    }
        if(s==num){
            printf("%d No. is armstrong",num);
        
        }
        else{
            printf("%d No. is not armstrong",num);
        }
    
    return 0;
}
